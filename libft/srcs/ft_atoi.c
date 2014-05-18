/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 11:23:36 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 16:50:50 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		new;
	int		neg;

	neg = 0;
	i = 0;
	new = 0;
	while (str[i] >= 1 && str[i] <= 32)
		i++;
	if (str[i] == 0)
		return (0);
	neg = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if ((char)str[i] < '0' || (char)str[i] > '9')
			break ;
		new *= 10;
		new += str[i] - 48;
		i++;
	}
	if (str[neg] == '-')
		return (-new);
	return (new);
}
