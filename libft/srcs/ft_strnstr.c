/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 10:39:53 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 20:58:05 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	int		bkp;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i])
	{
		bkp = i;
		j = 0;
		while (s2[j])
		{
			while (s2[j++] == s1[i++] && n > 0)
			{
				n--;
				if (s2[j] == '\0')
					return ((char *)&s1[bkp]);
			}
			j++;
			i = bkp;
		}
		i++;
	}
	return (NULL);
}
