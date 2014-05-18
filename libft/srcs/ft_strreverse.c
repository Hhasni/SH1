/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 11:30:11 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 11:30:25 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrevers(char *s)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = (ft_strlen(s) - 1);
	if (s[i] == '-')
		i++;
	while (i < len)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		i++;
		len--;
	}
	return (s);
}
