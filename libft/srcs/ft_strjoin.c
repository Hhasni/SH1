/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 13:52:57 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 17:08:14 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	new = NULL;
	if (s1 && s2)
	{
		len = (ft_strlen((char *)s1) + ft_strlen((char *)s2));
		if (!(new = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s1[i])
		{
			new[i] = s1[i];
			i++;
		}
		while (s2[j])
			new[i++] = s2[j++];
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
