/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 12:43:37 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 17:07:28 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*new;

	i = 0;
	len = 0;
	if (s && f)
	{
		while (s[len])
			len++;
		if (!(new = (char *)malloc(sizeof(char) * i)))
			return (NULL);
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
