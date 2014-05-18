/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 20:15:33 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/14 21:47:26 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s1;
	char		*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	while (n > 0)
	{
		*s1 = *s2;
		if (*s2 == (unsigned char)c)
		{
			s1++;
			return ((void *)s1);
		}
		s1++;
		s2++;
		n--;
	}
	return (NULL);
}
