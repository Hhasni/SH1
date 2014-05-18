/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 20:21:32 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/14 22:06:40 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	char		*s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (s2 <= s1)
	{
		s1 += len - 1;
		s2 += len - 1;
		while (len > 0)
		{
			*s1 = *s2;
			s1--;
			s2--;
			len--;
		}
		return (dst);
	}
	else
		return (ft_memcpy(dst, src, len));
}
