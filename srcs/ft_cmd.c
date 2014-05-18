/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:49:11 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 14:09:14 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static void		ft_cmd_alias(t_struct *l, char *av, char **path, char **env)
{
	int			i;
	char		**tab;
	t_struct	*tmp;

	i = 0;
	tab = NULL;
	tmp = l;
	while (tmp)
	{
		if (ft_strcmp(av, tmp->alias) == 0)
		{
			tab = ft_strsplit(tmp->cmd, ' ');
			execve(tab[0], tab, env);
			while (path[i])
			{
				execve(ft_strjoin(path[i], tab[0]), tab, env);
				i++;
			}
		}
		tmp = tmp->next;
		i = 0;
	}
}

char			*ft_cmd(t_struct *l, char **path, char **av, char **env)
{
	int			i;

	i = 0;
	execve(av[0], av, env);
	while (path[i])
	{
		execve((ft_strjoin(path[i], av[0])), av, env);
		i++;
	}
	ft_cmd_alias(l, av[0], path, env);
	ft_error_cmd(av[0]);
	return (NULL);
}
