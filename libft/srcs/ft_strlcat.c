/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 09:18:08 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 09:49:52 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_s1;
	size_t	len_s2;
	int		i;
	size_t	tmp;

	len_s1 = ft_strlen(dst);
	len_s2 = ft_strlen((char *)src);
	i = 0;
	tmp = (size - len_s1 - 1);
	if (size < len_s1)
		return (len_s2 + size);
	while (i < (int)tmp)
	{
		dst[len_s1 + i] = src[i];
		i++;
	}
	dst[len_s1 + i] = '\0';
	return (len_s1 + len_s2);
}
