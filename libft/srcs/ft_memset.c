/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 20:00:08 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/14 20:44:15 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*bkp;

	bkp = b;
	i = 0;
	while (i < len)
	{
		bkp[i++] = (unsigned char)c;
	}
	return (b);
}
