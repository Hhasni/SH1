/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 20:23:44 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/14 22:45:48 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*bkp;

	bkp = (unsigned char *)s;
	while (n > 0)
	{
		if (*bkp == (unsigned char)c)
			return ((void *)bkp);
		bkp++;
		n--;
	}
	return (NULL);
}
