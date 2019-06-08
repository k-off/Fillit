/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   magic_copy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: svoort <svoort@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/01 12:58:56 by svoort         #+#    #+#                */
/*   Updated: 2019/02/07 13:15:39 by svoort        ########   odam.nl         */
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
	int	index;
	int	type;

	index = 1;
	if ((**figs % 100) == i)
	{
		type = (**figs % 10000) / 100;
		if (ft_put_tet1(desk, i, j, type) || ft_put_tet3(desk, i, j, type)
			|| ft_put_tet5(desk, i, j, type) || ft_put_tet6(desk, i, j, type)
			|| ft_put_tet7(desk, i, j, type) || ft_put_tet9(desk, i, j, type)
			|| ft_put_tet10(desk, i, j, type) || ft_put_tet11(desk, i, j, type)
			|| ft_put_tet13(desk, i, j, type) || ft_put_tet15(desk, i, j, type)
			|| ft_put_tet17(desk, i, j, type) || ft_put_tet18(desk, i, j, type)
			|| ft_put_tet19(desk, i, j, type))
		{
			*figs -= 10000;
			if (ft_are_all_used(figs) == 1)
				return (1);
			else if (ft_try_put_fig(desk, i + 1, j, type))
				return (1);
			else if (ft_try_put_fig(desk, i, j + 1, type))
				return (1);
			else
			{
				ft_rem_ret1(desk, i, j, type) || ft_rem_ret3(desk, i, j, type)
				|| ft_rem_ret5(desk, i, j, type) || ft_rem_ret6(desk, i, j, type)
				|| ft_rem_ret7(desk, i, j, type) || ft_rem_ret9(desk, i, j, type)
				|| ft_rem_ret10(desk, i, j, type) || ft_rem_ret11(desk, i, j, type)
				|| ft_rem_ret13(desk, i, j, type) || ft_rem_ret15(desk, i, j, type)
				|| ft_rem_ret17(desk, i, j, type) || ft_rem_ret18(desk, i, j, type)
				|| ft_rem_ret19(desk, i, j, type);
				return (0);
			}
		}
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
