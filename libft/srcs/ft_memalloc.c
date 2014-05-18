/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 12:13:32 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 16:51:20 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*new;
	int		i;
	char	*bkp;

	i = 0;
	if (!(new = (void *)malloc(sizeof(void) * size)))
		return (NULL);
	bkp = new;
	while (i < (int)size)
		bkp[i++] = 0;
	return (new);
}
