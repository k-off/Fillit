/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put_tetriminos_3.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/06 09:08:02 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/06 09:08:02 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_rem_tet17(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 17 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& i > 0 && (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i - 1][j + 1] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j + 1] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet18(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 18 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& i > 0 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
		&& (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i - 1][j + 1] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet19(int ***d, int i, int j, int type)
{
	if (type % 100 == 19 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 2][j] = 0;
		return (1);
	}
	else
		return (0);
}

int	put_tetris(int ***d, int i, int j, int type)
{
	if (ft_put_tet1(desk, i, j, type) || ft_put_tet3(desk, i, j, type)
		|| ft_put_tet5(desk, i, j, type) || ft_put_tet6(desk, i, j, type)
		|| ft_put_tet7(desk, i, j, type) || ft_put_tet9(desk, i, j, type)
		|| ft_put_tet10(desk, i, j, type) || ft_put_tet11(desk, i, j, type)
		|| ft_put_tet13(desk, i, j, type) || ft_put_tet15(desk, i, j, type)
		|| ft_put_tet17(desk, i, j, type) || ft_put_tet18(desk, i, j, type)
		|| ft_put_tet19(desk, i, j, type))
	{
		figs[0][k] -= 10000;
		return (1);
	}
	else
		return (0);
}

int rem_tetris(int ***d, int i, int j, int type)
{
	if (ft_rem_tet1(desk, i, j, type) || ft_rem_tet3(desk, i, j, type)
		|| ft_rem_tet5(desk, i, j, type) || ft_rem_tet6(desk, i, j, type)
		|| ft_rem_tet7(desk, i, j, type) || ft_rem_tet9(desk, i, j, type)
		|| ft_rem_tet10(desk, i, j, type) || ft_rem_tet11(desk, i, j, type)
		|| ft_rem_tet13(desk, i, j, type) || ft_rem_tet15(desk, i, j, type)
		|| ft_rem_tet17(desk, i, j, type) || ft_rem_tet18(desk, i, j, type)
		|| ft_rem_tet19(desk, i, j, type))
	{
		figs[0][k] += 10000;
		return (1);
	}
	else
		return (0);
}
