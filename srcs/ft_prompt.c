/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prompt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:51:11 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:20:26 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static char			*ft_prompt_begin_at(char *str, char c)
{
	int				i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != '\0')
			return (&str[++i]);
		i++;
	}
	return (str);
}

static void			ft_prompt_display(char *new, char *user)
{
	ft_putcolor(RED, user);
	ft_putcolor(BLUE, "$");
	ft_putcolor(BLUE, new);
	ft_putcolor(BLUE, "> ");
}

void				ft_prompt(char **bkp)
{
	int				i;
	int				j;
	char			*dir;
	char			*tmp;

	dir = NULL;
	tmp = NULL;
	i = ft_tab_line_number(bkp, "USER");
	j = ft_tab_line_number(bkp, "PWD");
	if (i >= 0 && j >= 0)
	{
		tmp = ft_prompt_begin_at(bkp[i], '=');
		if ((dir = ft_strstr(bkp[j], tmp)) == NULL)
		{
			dir = ft_prompt_begin_at(bkp[j], '=');
			ft_prompt_display(dir, tmp);
		}
		else
		{
			dir = &(ft_strstr(bkp[j], tmp))[ft_strlen(tmp)];
			ft_prompt_display(dir, tmp);
		}
		return ;
	}
	write(1, "$>", 2);
}
