/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 08:44:36 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 17:43:34 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*new;
	int		len;
	int		i;

	i = 0;
	new = NULL;
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
