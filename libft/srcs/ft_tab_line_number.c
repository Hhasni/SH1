/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_line_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 11:33:46 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 01:03:47 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_tab_line_number(char **bkp, char *focus)
{
	int				i;
	int				len;

	i = 0;
	len = ft_strlen(focus);
	while (bkp[i])
	{
		if (ft_strncmp(focus, bkp[i], len) == 0)
			return (i);
		i++;
	}
	return (-1);
}
