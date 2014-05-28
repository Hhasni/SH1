/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alias.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:28:35 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/18 22:33:22 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

static int				ft_alias_is_ok(char *str)
{
	int					i;

	i = 1;
	if (str == NULL)
		return (0);
	if (ft_strlen(str) > ft_strlen("alias"))
		str = &str[ft_strlen("alias")];
	if (str[i] != '\0' && str[i] != ' ')
	{
		if (ft_pars_alias(&str[i]) == 1)
			return (1);
	}
	return (0);
}

static char				*ft_alias_cmd(char *str)
{
	char				*new;
	int					i;
	int					j;
	int					len;

	new = NULL;
	i = 1;
	j = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (str[i])
	{
		if (str[i] != 39)
		{
			new[j] = str[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}

static char				*ft_alias_copy(char *str)
{
	char				*new;
	int					i;
	int					len;

	i = 0;
	len = 0;
	new = NULL;
	if (str == NULL)
		return (NULL);
	len = ft_strlen_occur(str, '=');
	if (!(new = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

static void				ft_alias_recover(char *str, t_struct **list)
{
	char				*alias;
	char				*cmd;

	alias = NULL;
	cmd = NULL;
	if (ft_alias_is_ok(str) == 0)
		return ;
	alias = ft_alias_copy(&str[6]);
	cmd = ft_alias_cmd(&str[ft_strlen(alias) + 6]);
	ft_fill(list, alias, cmd);
	ft_free(cmd);
	ft_free(alias);
}

int						ft_alias_sh1rc(t_struct **list)
{
	int					fd;
	char				*line;

	line = NULL;
	fd = open(".sh1rc", O_RDONLY | S_IRUSR);
	if (fd == -1)
		return (1);
	while (get_next_line(fd, &line) == 1)
	{
		if (ft_strncmp(line, "alias", 5) == 0)
			ft_alias_recover(line, list);
		ft_free(line);
	}
	while (get_next_line(fd, &line) > 0)
		ft_free(line);
	if (close(fd) == -1)
		return (1);
	return (0);
}
