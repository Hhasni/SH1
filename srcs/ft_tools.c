/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:56:09 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:35:17 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

char				*ft_recover_target(char **bkp_env, char *target)
{
	int				index;
	int				c;
	int				t;
	int				len;
	char			*new;

	c = 0;
	index = 0;
	t = 0;
	len = ft_strlen(target);
	while (bkp_env[index])
	{
		if (ft_strncmp(bkp_env[index], target, len) == 0)
			t = index;
		index++;
	}
	if (t > 0)
	{
		new = ft_strdup(bkp_env[t]);
		return (new);
	}
	return (NULL);
}

char				*ft_filtr(char *str)
{
	int				i;
	int				j;
	char			*bkp;

	i = 0;
	j = 0;
	if (!(bkp = (char *)malloc(sizeof(char) * ft_strlen(str) + 2)))
		return (NULL);
	while (str[i])
	{
//		if (str[i] >= 'a' && str[i] <= 'z')
//			bkp[j++] = str[i] - 32;
//		else if (str[i] != '=')
			bkp[j++] = str[i];
		i++;
	}
	bkp[j++] = '=';
	bkp[j] = '\0';
	return (bkp);
}

char				**ft_bkp_env(char **env)
{
	char			**new;
	int				i;
	int				l;

	i = 0;
	l = 0;
	while (env[i])
		i++;
	if (!(new = (char **)malloc(sizeof(char *) * i + 1)))
		return (NULL);
	while (env[l])
	{
		new[l] = ft_strdup(env[l]);
		l++;
	}
	new[l] = NULL;
	return (new);
}
