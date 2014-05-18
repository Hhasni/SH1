/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcolor_endl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 12:41:32 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:41:36 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putcolor_endl(char *color, char *str)
{
	char	*end;

	end = "\033[0m";
	write(1, color, ft_strlen(color));
	write(1, str, ft_strlen(str));
	write(1, end, ft_strlen(end));
	write(1, "\n", 1);
}
