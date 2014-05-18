/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:37:06 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:19:57 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

void			ft_error_cmd(char *av)
{
	ft_putcolor(RED, "sh1 :");
	ft_putendl(ft_strcat(av, ": command not found"));
	exit(1);
}

void			ft_error_opening(char *path)
{
	ft_putstr(path);
	ft_putendl(": Not found or no rights, asshole!");
}
