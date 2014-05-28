/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_semicolon.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/18 23:00:48 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 23:10:07 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

static int			ft_count(char *str, char c)
{
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c || str[i] == '&')
			i++;
		while (str[i] != c && str[i] != '&' && str[i])
			i++;
		j++;
	}
	return (j);
}

static char			*ft_strdup_to(char *str, int s, int e)
{
	int				i;
	int				len;
	char			*new;

	i = 0;
	len = e - s;
	str = &str[s];
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s < e)
	{
		new[i] = str[i];
		i++;
		s++;
	}
	new[i] = '\0';
	return (new);
}

char				**ft_simple_split(char *str, char c)
{
	int				i;
	int				j;
	int				k;
	char			**new;

	i = 0;
	j = 0;
	new = NULL;
	if (!(new = (char **)malloc(sizeof(char *) * ft_count(str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		k = i;
		while (str[i] != c && str[i] != '&' && str[i])
			i++;
		new[j] = ft_strdup_to(str, k, i);
		if (*new[j] != '\0')
			j++;
		i++;
	}
	new[j] = NULL;
	return (new);
}
