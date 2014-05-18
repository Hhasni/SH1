/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 14:27:34 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:42:34 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*new;
	int		i;
	int		nb;
	int		len;

	i = 0;
	nb = 0;
	len = ft_int_len(n);
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	if (n < 0)
		new[i++] = '-';
	if (n == 0)
		new[i++] = '0';
	while (n != 0)
	{
		if (n < 0)
			nb = -(n % 10) + '0';
		else
			nb = n % 10 + '0';
		n /= 10;
		new[i++] = nb;
	}
	new[i] = '\0';
	return (ft_strrevers(new));
}
