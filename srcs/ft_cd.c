/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:33:20 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:19:37 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh1.h>

static int		ft_cd_is_valid(char *path, char *target)
{
	if (*target == ' ' || *target == '\0' || *target == '\t')
		return (0);
	write(1, path, ft_strlen(path));
	ft_putendl(": command not found");
	return (1);
}

static char		*ft_cd_rec_value(char *full)
{
	int			i;
	char		*new_path;

	i = 0;
	if (full == NULL)
		return (0);
	while (full[i] != '/')
		i++;
	new_path = ft_strdup(&full[i]);
	return (new_path);
}

static void		ft_cd_mod_pwd(char **bkp_env, char *line, char *pwd)
{
	int			index;
	char		*new;

	new = NULL;
	index = 0;
	if (pwd == NULL)
		new = ft_strjoin(line, getcwd(new, 1024));
	else
		new = ft_strjoin(line, pwd);
	while (bkp_env[index])
	{
		if (ft_strncmp(bkp_env[index], line, ft_strlen(line) - 1) == 0)
		{
			bkp_env[index] = NULL;
			bkp_env[index] = ft_strdup(new);
			return ;
		}
		index++;
	}
	bkp_env[index] = NULL;
	bkp_env[index] = ft_strdup(new);
	bkp_env[++index] = NULL;
}

static int		ft_cd_chdir(char *new_path, char **bkp_env, char **oldpwd)
{
	int			a;

	a = chdir(new_path);
	if (a == 0)
	{
		ft_cd_mod_pwd(bkp_env, "PWD=", NULL);
		ft_cd_mod_pwd(bkp_env, "OLDPWD=", *oldpwd);
	}
	return (a);
}

int				ft_cd(char *cmd, char **bkp_env)
{
	char		*full;
	char		**new_path;
	char		*oldpwd;
	int			a;

	new_path = NULL;
	oldpwd = NULL;
	oldpwd = getcwd(oldpwd, 1024);
	full = ft_recover_target(bkp_env, "OLDPWD");
	if (ft_cd_is_valid(cmd, &cmd[2]) == 1)
		return (1);
	new_path = ft_strsplit(cmd, ' ');
	if (new_path[1] == NULL || *new_path[1] == '\0' || *new_path[1] == '~')
		new_path[1] = ft_cd_rec_value(ft_recover_target(bkp_env, "HOME"));
	if (new_path[1] == NULL)
		return (0);
	if (*new_path[1] == '-' && full != NULL)
		new_path[1] = ft_cd_rec_value(full);
	a = ft_cd_chdir(new_path[1], bkp_env, &oldpwd);
	if (a != 0)
		ft_error_opening(cmd);
	return (1);
}
