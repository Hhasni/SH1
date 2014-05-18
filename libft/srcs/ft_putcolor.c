/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 11:40:15 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 11:56:12 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putcolor(char *color, char *str)
{
	char	*end;

	end = "\033[0m";
	write(1, color, ft_strlen(color));
	write(1, str, ft_strlen(str));
	write(1, end, ft_strlen(end));
}
