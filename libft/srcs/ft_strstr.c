/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 09:55:00 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/18 09:05:41 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		bkp;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		j = 0;
		bkp = i;
		while (s2[j])
		{
			while (s1[i++] == s2[j++])
			{
				if (s2[j] == '\0')
					return ((char *)&s1[bkp]);
			}
			i = bkp;
			j++;
		}
		i++;
	}
	return (NULL);
}
