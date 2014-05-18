/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 13:34:48 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 13:40:27 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	int		i;

	i = 0;
	if (s)
	{
		if (!(new = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (i < (int)len)
			new[i++] = s[start++];
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
