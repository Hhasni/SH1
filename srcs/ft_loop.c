/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:26:12 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 14:09:12 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static void			ft_signal(int sig)
{
	if (sig == 2)
		signal(SIGINT, SIG_IGN);
}

static void			ft_fork(char **av, char **path, char **env, t_struct *list)
{
	int				i;
	pid_t			father;

	i = 0;
	father = fork();
	if (father == 0)
		ft_cmd(list, path, av, env);
	else
		wait(&father);
}

void				ft_loop(char **av, char **bkp_env, char **path)
{
	char			*line;
	t_struct		*list;

	list = NULL;
	ft_alias_sh1rc(&list);
	signal(SIGINT, ft_signal);
	ft_prompt(bkp_env);
	while (get_next_line(0, &line) > 0)
	{
		av = NULL;
		av = ft_strsplit(line, ' ');
		if (ft_build_check_line(line, av[0], bkp_env) == 0)
			ft_fork(av, path, bkp_env, list);
		ft_prompt(bkp_env);
	}
	write(1, "\n", 1);
}
