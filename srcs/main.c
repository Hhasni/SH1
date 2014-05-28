/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/23 12:53:04 by hhasni            #+#    #+#             */
/*   Updated: 2014/05/22 15:42:37 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh2.h>

void				ft_index(void)
{
	ft_putcolor(WLCM, "Your are now in hhasni's sh2 ");
	write(1, "try ", 4);
	ft_putcolor(RED, "\"help\"");
	write(1, " for more info\n", 15);
}

int					main(int ac, char **av, char **env)
{
	int				i;
	char			**path;
	char			**bkp_env;
	char			**tab;

	i = 0;
	bkp_env = NULL;
	path = NULL;
	tab = NULL;
	av = NULL;
	if (ac == 1)
	{
		if ((env[0]) != NULL)
		{
			ft_index();
			bkp_env = ft_bkp_env(env);
			path = ft_path_recover(env);
			ft_loop(tab, bkp_env, path);
		}
		else
			write(1, "YOU SON OF A BITCH\n", ft_strlen("YOU SON OF A BITCH\n"));
	}
	return (0);
}
