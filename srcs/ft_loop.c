/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:26:12 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/22 18:08:05 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>
#include <stdio.h>

extern			char	**environ;

static void			ft_signal(int sig)
{
	char			**bkp;

	(void)sig;
	bkp = NULL;
	write(1, "\n", 1);
	bkp = ft_bkp_env(environ);
	ft_prompt(bkp);
}

static void			ft_fork(char **av, char **path, char **env, t_struct *list)
{
	int				i;
	pid_t			father;
	char			**cmd;

	cmd = NULL;
	i = 0;
	while (av[i])
	{
		father = fork();
		cmd = ft_strsplit(av[i], ' ');
		if (father == 0)
			ft_cmd(list, path, cmd, env);
		else
			wait(&father);
		i++;
	}
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
		av = ft_simple_split(line, ';');
		if (ft_build_check_line(line, av[0], bkp_env) == 0)
			ft_fork(av, path, bkp_env, list);
		ft_prompt(bkp_env);
	}
	write(1, "\n", 1);
}
