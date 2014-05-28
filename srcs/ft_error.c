/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:37:06 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:34:18 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

void			ft_error_cmd(char *av)
{
	ft_putcolor(RED, "sh2 :");
	ft_putendl(ft_strcat(av, ": command not found"));
	exit(1);
}

void			ft_error_opening(char *path)
{
	ft_putstr(path);
	ft_putendl(": Not found or no rights, asshole!");
}
