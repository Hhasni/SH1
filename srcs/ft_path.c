/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:50:49 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:34:34 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

static char		**ft_path_initialazing(char *str)
{
	char		**tab_path;
	char		**tab_ret;
	int			i;
	int			len;

	i = 0;
	len = 0;
	tab_path = NULL;
	tab_ret = NULL;
	while (*str != '/')
		str++;
	tab_path = ft_strsplit(str, ':');
	len = ft_tablen(tab_path);
	if (!(tab_ret = (char **)malloc(sizeof(char *) * len + 1)))
		return (NULL);
	while (i < len)
	{
		tab_ret[i] = ft_strjoin(tab_path[i], "/");
		i++;
	}
	ft_free_tab(tab_path);
	return (tab_ret);
}

char			**ft_path_recover(char **env)
{
	int			i;
	char		**tab_path;

	i = 0;
	tab_path = NULL;
	while (env[i])
	{
		if (ft_strstr(env[i], "PATH"))
			tab_path = ft_path_initialazing(env[i]);
		i++;
	}
	return (tab_path);
}
