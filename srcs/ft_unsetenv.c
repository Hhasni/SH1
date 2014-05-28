/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:58:22 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:35:26 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>
#include <stdio.h> /*!*/

static void			ft_unsetenv_erase(char *focus, char **env)
{
	int				i;
	int				t;
	int				len;

	i = 0;
	t = -1;
	len = ft_strlen(focus);
	while (env[i])
	{
		if (ft_strncmp(focus, env[i], len) == 0)
			t = i;
		i++;
	}
	if (t != -1)
	{
		while (env[t + 1])
		{
			env[t] = env[t + 1];
			t++;
		}
		env[t] = NULL;
	}
}

int					ft_unsetenv(char *line, char **bkp_env)
{
	int				i;
	char			*new;
	char			**tabc;

	i = 0;
	new = NULL;
	tabc = ft_strsplit(line, ' ');
	while (tabc[i])
		i++;
	if (i != 2)
		ft_putendl("ERROR, please type : unsetenv <VARIABLE>");
	else
		ft_unsetenv_erase(tabc[1], bkp_env);
	return (1);
}
