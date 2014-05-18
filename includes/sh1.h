/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_sh.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhasni <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/22 20:23:47 by hhasni            #+#    #+#             */
/*   Updated: 2014/04/23 13:45:19 by hhasni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SH1_H
# define SH1_H

# include <libft.h>
# include <signal.h>
# include <fcntl.h>
# include <stdio.h>

# define RED "\033[1;31;40m"
# define YELL "\033[1;33;40m"
# define BLUE "\033[1;34;40m"
# define MAG "\033[1;35;40m"
# define WHITE "\033[1;37;40m"
# define END "\033[0m"
# define WLCM "\033[1;32;44m"

typedef struct		s_struct
{
	char			*alias;
	char			*cmd;
	struct s_struct	*next;
}					t_struct;

int					ft_alias_sh1rc(t_struct **list);
void				ft_fill(t_struct **list, char *alias, char *cmd);
int					ft_pars_alias(char *str);
int					ft_build_check_line(char *line, char *av, char **bkp_env);
int					ft_cd(char *cmd, char **bkp_env);
char				*ft_cmd(t_struct *l, char **path, char **av, char **env);
int					ft_env(char **bkp_env);
void				ft_error_opening(char *path);
void				ft_error_cmd(char *av);
void				ft_loop(char **av, char **bkp_env, char **path);
char				**ft_path_recover(char **env);
void				ft_prompt(char **bkp);
void				ft_free(char *str);
void				ft_free_tab(char **tab);
int					ft_setenv(char *line, char **env);
char				*ft_recover_target(char **bkp_env, char *target);
char				**ft_bkp_env(char **env);
char				*ft_filtr(char *str);
int					ft_unsetenv(char *line, char **bkp_env);

#endif
