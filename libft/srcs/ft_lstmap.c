/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/15 19:40:44 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/15 19:59:13 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*bkp;

	bkp = NULL;
	if (lst && f)
	{
		new = f(lst);
		if (!new)
			return (NULL);
		bkp = new;
		while (lst)
		{
			new = f(lst);
			lst = lst->next;
			new = new->next;
		}
	}
	return (bkp);
}
