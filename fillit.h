/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/02 15:15:33 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/02 16:57:41 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FILLIT_H
# define __FILLIT_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/includes/libft.h"

int			main(int argc, char **argv);
int			ft_check_file(int fd, int **f_s);
int			ft_check_content(char *b, int **f_s);
int			ft_termin_b(char **b);
int			x(char *b, int f_s, int i);
int			y(char *b, int f_s, int i);
int			z(char *b, int f_s, int i);
int			**ft_create_desk(int side, int **desk);
int			ft_assign_fs(char *b, int **f_s, int count_hash);
void		check_if_filled(int **f_s, int ***desk, int side, int n);
int			ft_fillit(int **f_s, int ***desk, int side, int n);
void		ft_if_filled(int **f_s, int ***desk, int side);
void		if_n2(int **f_s, int ***desk, int side, int n);
void		ft_swap_int_arr(int **f_s, int n, int i);
int			ft_fill_desk(int ***desk, int **figs);
void		ft_refresh(int *figs);
int			ft_try_put_fig(int ***desk, int **figs, int i, int j);
int			ft_is_space_on(int ***desk);
int			ft_are_all_used(int *figs);
int			rem_tetris(int ***d, int i, int j, int type);
int			ft_rem_tet1(int ***d, int i, int j, int type);
int			ft_rem_tet3(int ***d, int i, int j, int type);
int			ft_rem_tet6(int ***d, int i, int j, int type);
int			ft_rem_tet9(int ***d, int i, int j, int type);
int			ft_rem_tet15(int ***d, int i, int j, int type);
int			ft_rem_tet11(int ***d, int i, int j, int type);
int			ft_rem_tet5(int ***d, int i, int j, int type);
int			ft_rem_tet7(int ***d, int i, int j, int type);
int			ft_rem_tet10(int ***d, int i, int j, int type);
int			ft_rem_tet13(int ***d, int i, int j, int type);
int			ft_rem_tet17(int ***d, int i, int j, int type);
int			ft_rem_tet18(int ***d, int i, int j, int type);
int			ft_rem_tet19(int ***d, int i, int j, int type);
int			put_tetris(int ***d, int i, int j, int type);
int			ft_put_tet1(int ***d, int i, int j, int type);
int			ft_put_tet3(int ***d, int i, int j, int type);
int			ft_put_tet6(int ***d, int i, int j, int type);
int			ft_put_tet9(int ***d, int i, int j, int type);
int			ft_put_tet15(int ***d, int i, int j, int type);
int			ft_put_tet11(int ***d, int i, int j, int type);
int			ft_put_tet5(int ***d, int i, int j, int type);
int			ft_put_tet7(int ***d, int i, int j, int type);
int			ft_put_tet10(int ***d, int i, int j, int type);
int			ft_put_tet13(int ***d, int i, int j, int type);
int			ft_put_tet17(int ***d, int i, int j, int type);
int			ft_put_tet18(int ***d, int i, int j, int type);
int			ft_put_tet19(int ***d, int i, int j, int type);
void		ft_putdesk(int **desk);
void		ft_free_df(int ***desk, int ***figs, int i);

#endif
