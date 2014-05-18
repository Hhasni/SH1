/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen_occur.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 11:55:19 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 11:55:27 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_tablen_occur(char **tab, char *str)
{
	int				i;

	i = 0;
	if (tab && str)
	{
		while (tab[i] && ft_strcmp(tab[i], str) != 0)
			i++;
		return (i);
	}
	return (0);
}
