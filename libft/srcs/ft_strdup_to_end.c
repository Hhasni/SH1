/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_to_end.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 12:01:24 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:01:53 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup_to_end(char *str, int s, int e)
{
	int			i;
	int			len;
	char		*new;

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
