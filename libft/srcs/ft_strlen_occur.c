/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_occur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 11:34:26 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:08:00 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int						ft_strlen_occur(char *str, char c)
{
	int					i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}
