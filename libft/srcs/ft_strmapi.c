/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 12:56:30 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 13:27:13 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*new;

	i = 0;
	len = 0;
	new = NULL;
	if (s && f)
	{
		while (s[len])
			len++;
		if (!(new = (char*)malloc(sizeof(char) * len)))
			return (NULL);
		while (s[i])
		{
			new[i] = f(i, s[i]);
			i++;
		}
		return (new);
	}
	return (NULL);
}
