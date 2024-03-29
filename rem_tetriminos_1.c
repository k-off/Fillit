/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   put_tetriminos_1.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/06 09:08:02 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/06 09:08:02 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_rem_tet1(int ***d, int i, int j, int type)
{
	if (type % 100 == 1 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1)
		&& (d[0][i + 3][j] == 0 || d[0][i + 3][j] == 1))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 2][j] = 0;
		d[0][i + 3][j] = 0;
		return (1);
	}
	else if (type % 100 == 2 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
		&& (d[0][i][j + 3] == 0 || d[0][i][j + 3] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i][j + 3] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet3(int ***d, int i, int j, int type)
{
	if (type % 100 == 3 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		return (1);
	}
	else if (type % 100 == 4 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 1][j + 2] == 0 || d[0][i + 1][j + 2] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 1][j + 2] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet6(int ***d, int i, int j, int type)
{
	if (type % 100 == 6 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j + 1] == 0 || d[0][i + 2][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 2][j + 1] = 0;
		return (1);
	}
	else if (type % 100 == 8 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i + 1][j] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet9(int ***d, int i, int j, int type)
{
	if (type % 100 == 9 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j + 1] == 0 || d[0][i + 2][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 2][j + 1] = 0;
		return (1);
	}
	else if (type % 100 == 14 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 1][j + 2] == 0 || d[0][i + 1][j + 2] == 1))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 1][j + 2] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet15(int ***d, int i, int j, int type)
{
	if (type % 100 == 15 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 2][j] = 0;
		return (1);
	}
	else if (type % 100 == 16 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
			 && (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i + 1][j + 1] = 0;
		return (1);
	}
	else
		return (0);
}
