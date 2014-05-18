/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 20:27:01 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 19:56:37 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*bkp_s1;
	unsigned char		*bkp_s2;

	bkp_s1 = (unsigned char *)s1;
	bkp_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*bkp_s1 != *bkp_s2)
			return (*bkp_s1 - *bkp_s2);
		bkp_s1++;
		bkp_s2++;
		n--;
	}
	return (0);
}
