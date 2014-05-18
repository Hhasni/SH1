/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_color.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 12:10:18 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:10:57 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putchar_color(char *color, char c)
{
	char	*end;

	end = "\033[0m";
	write(1, color, ft_strlen(color));
	write(1, &c, 1);
	write(1, end, ft_strlen(end));
}
