/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/31 15:37:32 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/02 16:37:51 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_free_df(int ***desk, int ***figs, int i)
{
	int		j;

	j = 0;
	if (i)
	{
		free(figs[0][0]);
		free(figs[0]);
		figs = NULL;
	}
	if (*desk)
	{
		while (desk[0][j][0] != -1)
			j++;
		while (j > 0)
		{
			free(desk[0][j]);
			j--;
		}
		free(desk[0][j]);
		free(desk[0]);
		desk = NULL;
	}
}

void		check_if_filled(int **f_s, int ***desk, int side, int n)
{
	int		is_filled;

	if (n == 0)
	{
		while (f_s[0][n] != -1)
			n++;
		while (side * side < n * 4)
			side++;
	}
	is_filled = ft_fillit(f_s, desk, side, n);
	while (!is_filled)
	{
		side++;
		free(*desk);
		*desk = ft_create_desk(side, *desk);
		is_filled = ft_fillit(f_s, desk, side, n);
	}
}

void		ft_putdesk(int **desk)
{
	int		i;
	int		j;

	i = 0;
	while (desk[i][0] > -1)
	{
		j = 0;
		while (desk[i][j] > -1)
		{
			if (desk[i][j] < 2)
				ft_putchar('.');
			else
				ft_putchar((desk[i][j] / 100) % 100);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int			main(int argc, char **argv)
{
	int		fd;
	int		**f_s;
	int		**desk;

	desk = 0;
	f_s = (int**)ft_memalloc(sizeof(int**) * 1);
	f_s[0] = (int*)ft_memalloc(sizeof(int*) * 27);
	f_s[0][0] = -1;
	if (argc == 2)
		if ((fd = open(argv[1], O_RDONLY)))
			if (ft_check_file(fd, f_s) > -1)
			{
				desk = ft_create_desk(2, desk);
				check_if_filled(f_s, &desk, 2, 0);
				ft_putdesk(desk);
			}
			else
				ft_putstr("error\n");
		else
			ft_putstr("error\n");
	else
		ft_putstr("usage\n");
	free(desk);
	return (0);
}
