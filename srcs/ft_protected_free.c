/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protected_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:52:36 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:34:54 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

void		ft_free_tab(char **tab)
{
	int		i;

	i = 0;
	if (tab != NULL)
	{
		while (tab[i] != NULL)
		{
			free(tab[i]);
			i++;
		}
		free(tab);
	}
}

void		ft_free(char *str)
{
	if (str != NULL)
		free(str);
}
