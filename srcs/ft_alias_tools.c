/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alias_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:31:53 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:19:22 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

void					ft_fill(t_struct **list, char *alias, char *cmd)
{
	t_struct			*tmp;
	t_struct			*new;

	if (!(new = malloc(sizeof(t_struct))))
		return ;
	new->alias = ft_strdup(alias);
	new->cmd = ft_strdup(cmd);
	new->next = NULL;
	tmp = *list;
	if (tmp == NULL)
		*list = new;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

int						ft_pars_alias(char *str)
{
	int					i;
	int					a;
	int					e;

	i = 0;
	a = 0;
	e = 0;
	while (str[i])
	{
		if (str[i] == '=' && str[i + 1] == 39)
		{
			e++;
			a++;
			i++;
		}
		if (str[i] == 39 && str[i + 1] == '\0')
			a++;
		if (str[i] != '\0')
			i++;
	}
	if (e == 1 && a == 2)
		return (1);
	return (0);
}
