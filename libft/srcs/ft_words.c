/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/17 12:02:37 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/17 12:38:12 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_words(char *str, char c)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (str)
	{
		while (str[i])
		{
			while (str[i] == c || str[i] == ' ' || str[i] == '\t')
				i++;
			while (str[i] != c && str[i] != ' ' && str[i] != '\t' && str[i])
				i++;
			j++;
		}
		return (j);
	}
	return (-1);
}
