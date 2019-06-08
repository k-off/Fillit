/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   magic.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/01 12:58:56 by svoort         #+#    #+#                */
/*   Updated: 2019/02/02 16:50:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		**ft_create_desk(int side, int **desk)
{
	int		i;
	int		j;

	desk = (int**)ft_memalloc(sizeof(int**) * (side + 1));
	i = 0;
	while (i < side + 1)
	{
		desk[i] = (int*)ft_memalloc(sizeof(int*) * (side + 1));
		desk[i][side] = -1;
		j = 0;
		while (j < side + 1)
		{
			desk[i][j] = 0;
			if (i == side || j == side)
				desk[i][j] = -1;
			j++;
		}
		i++;
	}
	desk[0][0] = 1;
	desk[side][0] = -1;
	return (desk);
}

int		ft_are_all_used(int *figs)
{
	while (figs[0] > 0)
	{
		if (figs[0] > 9999)
			return (0);
		figs++;
	}
	return (1);
}

int		ft_is_space_on(int ***desk)
{
	int		i;
	int		j;
	int		has_empty;

	i = 0;
	has_empty = 0;
	while (desk[0][i][0] != -1)
	{
		j = 0;
		while (desk[0][i][j] != -1)
		{
			if (desk[0][i][j] == 0 && ((j > 0 && i == 0
			&& desk[0][i][j - 1] > 10000) || (j == 0 && i > 0
			&& desk[0][i - 1][j] > 10000) || (j > 0 && i > 0
			&& (desk[0][i][j - 1] > 10000 || desk[0][i - 1][j] > 10000))))
				desk[0][i][j] = 1;
			if (desk[0][i][j] == 0 || desk[0][i][j] == 1)
				has_empty = 1;
			j++;
		}
		i++;
	}
	if (has_empty)
		return (1);
	return (0);
}

int		ft_try_put_fig(int ***desk, int **figs, int i, int j)
{
	int		k;
	int		type;

	k = 0;
	while (figs[0][k] > 0)
	{
		if (figs[0][k] > 10000)
		{
			type = figs[0][k];
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
		}
		k++;
	}
	return (0);
}

void	ft_refresh(int *figs)
{
	int		i;

	i = 0;
	while (figs[i] > 6000)
	{
		if (figs[i] < 10000)
			figs[i] += 10000;
		i++;
	}
}
