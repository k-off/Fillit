/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/07 07:20:06 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/07 07:20:46 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_fill_desk(int ***desk, int **figs)
{
	int		i;
	int		j;

	ft_refresh(*figs);
	if (ft_are_all_used(*figs))
		return (1);
	i = 0;
	while (desk[0][i][0] != -1)
	{
		j = 0;
		while (desk[0][i][j] != -1)
		{
			if (desk[0][i][j] == 1 || desk[0][i][j] == 0)
			{
				ft_try_put_fig(desk, figs, i, j);
				if (ft_are_all_used(*figs))
					return (1);
				if (!ft_is_space_on(desk))
					return (0);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void		ft_swap_int_arr(int **f_s, int n, int i)
{
	int		tmp;

	if ((i + 1) % 2 == 0)
	{
		tmp = f_s[0][n - 1];
		f_s[0][n - 1] = f_s[0][i];
		f_s[0][i] = tmp;
	}
	else
	{
		tmp = f_s[0][n - 1];
		f_s[0][n - 1] = f_s[0][0];
		f_s[0][0] = tmp;
	}
}

void		if_n2(int **f_s, int ***desk, int side, int n)
{
	if (n > 2)
	{
		free(*desk);
		*desk = ft_create_desk(side, *desk);
		ft_fillit(f_s, desk, side, n - 1);
	}
}

void		ft_if_filled(int **f_s, int ***desk, int side)
{
	int		is_filled;

	is_filled = 0;
	*desk = ft_create_desk(side, *desk);
	is_filled = ft_fill_desk(desk, f_s);
	if (is_filled)
	{
		ft_putdesk(*desk);
		ft_free_df(desk, &f_s, 1);
		exit(0);
	}
}

int			ft_fillit(int **f_s, int ***desk, int side, int n)
{
	int		i;

	i = 0;
	if (n == 1)
	{
		ft_if_filled(f_s, desk, side);
	}
	if_n2(f_s, desk, side, n);
	while (i < (n - 1))
	{
		ft_swap_int_arr(f_s, n, i);
		ft_free_df(desk, &f_s, 0);
		ft_if_filled(f_s, desk, side);
		if_n2(f_s, desk, side, n);
		i++;
	}
	return (0);
}
