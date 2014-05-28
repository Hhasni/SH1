/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:34:22 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:34:06 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

static void		ft_env_display(char *str)
{
	int			i;

	i = 0;
	write(1, YELL, ft_strlen(YELL));
	while (str[i])
	{
		if (str[i] == '=')
		{
			write(1, RED, ft_strlen(YELL));
			write(1, &str[i++], 1);
			write(1, MAG, ft_strlen(YELL));
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, END, ft_strlen(END));
	write(1, "\n", 1);
}

int				ft_env(char **bkp_env)
{
	int			i;

	i = 0;
	while (bkp_env[i])
	{
		ft_env_display(bkp_env[i]);
		i++;
	}
	return (1);
}
