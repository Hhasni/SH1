/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/23 13:13:54 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:19:30 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static int		ft_build_empty(char *str)
{
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	len = 0;
	len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == 32 || str[i] == '\t')
			j++;
		i++;
	}
	if (j == len)
		return (1);
	return (0);
}

static int		ft_build_help(void)
{
	ft_putcolor_endl(WHITE, "\t\tHELP MENU\n");
	ft_putcolor_endl(WHITE, "Welcome to sh1!\n");
	ft_putcolor_endl(WHITE, "Following build-in are available:");
	ft_putcolor_endl(WHITE, " -cd <directory> = to move inside sh1.");
	ft_putcolor_endl(WHITE, " -setenv <VARIABLE> <VALUE> = to add sh1's env");
	ft_putcolor_endl(WHITE, " -unsetenv <VARIABLE> = to delet sh1's env");
	ft_putcolor_endl(WHITE, " -exit/ctr+d = to quit sh1\n\n");
	ft_putcolor_endl(WHITE, "The sh1 is INDESTRUCTIBLE!\n");
	return (1);
}

int				ft_build_check_line(char *line, char *av, char **bkp_env)
{
	if (av == NULL)
		return (1);
	if (ft_strcmp(av, "help") == 0)
		return (ft_build_help());
	if (ft_strncmp(av, "cd", 2) == 0)
		return (ft_cd(line, bkp_env));
	if (ft_strncmp(av, "setenv", 6) == 0)
		return (ft_setenv(line, bkp_env));
	if (ft_strncmp(av, "unsetenv", 8) == 0)
		return (ft_unsetenv(line, bkp_env));
	if (ft_strncmp(av, "env", 3) == 0)
		return (ft_env(bkp_env));
	if (ft_build_empty(av) == 1)
		return (1);
	if (ft_strcmp(av, "exit") == 0)
		exit(0);
	return (0);
}
