/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 08:58:57 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 19:19:04 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*bkp;

	bkp = dst;
	while (n > 0)
	{
		*bkp = *src;
		if (*src)
			src++;
		bkp++;
		n--;
	}
	return (dst);
}
