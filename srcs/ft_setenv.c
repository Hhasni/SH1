/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:55:45 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:17:56 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static void				ft_setenv_new_entry(char *str, char **env)
{
	int					i;

	i = 0;
	while (env[i])
	{
		env[i] = ft_strdup(env[i]);
		i++;
	}
	env[i] = ft_strdup(str);
	env[i + 1] = NULL;
}

static int				ft_setenv_is_new(char *str, char *cmd, char **env)
{
	int					i;

	i = 0;
	while (env[i])
	{
		if (ft_strncmp(env[i], str, ft_strlen(str)) == 0)
		{
			env[i] = ft_strdup(cmd);
			return (1);
		}
		i++;
	}
	return (0);
}

int						ft_setenv(char *line, char **env)
{
	int					i;
	char				**bkp;
	char				*new;

	new = NULL;
	bkp = NULL;
	i = 0;
	if ((bkp = ft_strsplit(line, ' ')) == NULL)
		return (1);
	while (bkp[i])
		i++;
	if (i == 3)
	{
		new = ft_filtr(bkp[1]);
		if (ft_setenv_is_new(new, ft_strjoin(new, bkp[2]), env) == 1)
			return (1);
		ft_setenv_new_entry(ft_strjoin(new, bkp[2]), env);
	}
	else
		ft_putendl("ERROR, please type : setenv <VARIABLE> <VALUE>");
	return (1);
}
