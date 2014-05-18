/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 17:18:01 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:04:54 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *str, char c)
{
	int			i;
	int			j;
	int			k;
	char		**new;

	i = 0;
	k = 0;
	j = 0;
	if (str == NULL)
		return (NULL);
	if (!(new = (char **)malloc(sizeof(char *) * ft_words((char *)str, c) + 1)))
		return (NULL);
	while (str[i])
	{
		while (str[i] == c || str[i] == ' ' || str[i] == '\t')
			i++;
		k = i;
		while (str[i] != c && str[i] != ' ' && str[i] != '\t' && str[i])
			i++;
		new[j] = ft_strdup_to_end((char *)str, k, i);
		if (*new[j] != '\0')
			j++;
	}
	new[j] = NULL;
	return (new);
}
