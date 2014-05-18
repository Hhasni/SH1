/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 21:24:00 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 21:24:03 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		k;
	int		end;

	i = 0;
	k = 0;
	if ((char *)s == NULL)
		return (NULL);
	end = (ft_strlen((char *)s) - 1);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (end > i && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	if (!(new = (char *)malloc(sizeof(char) * (end - i + 1))))
		return (NULL);
	while (end >= i)
		new[k++] = s[i++];
	new[k] = '\0';
	return (new);
}
