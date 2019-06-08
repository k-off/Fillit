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

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/includes/libft.h"

int		ft_put_tet1(int ***d, int i, int j, int type)
{
	if (type % 100 == 1 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1)
		&& (d[0][i + 3][j] == 0 || d[0][i + 3][j] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 2][j] = type;
		d[0][i + 3][j] = type;
		return (1);
	}
	else if (type % 100 == 2 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
			 && (d[0][i][j + 3] == 0 || d[0][i][j + 3] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i][j + 3] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet3(int ***d, int i, int j, int type)
{
	if (type % 100 == 3 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i + 1][j] = type;
		d[0][i + 1][j + 1] = type;
		return (1);
	}
	else if (type % 100 == 4 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
			 && (d[0][i + 1][j + 2] == 0 || d[0][i + 1][j + 2] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i + 1][j + 1] = type;
		d[0][i + 1][j + 2] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet6(int ***d, int i, int j, int type)
{
	if (type % 100 == 6 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j + 1] == 0 || d[0][i + 2][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 1][j + 1] = type;
		d[0][i + 2][j + 1] = type;
		return (1);
	}
	else if (type % 100 == 8 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
			 && (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i + 1][j] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet9(int ***d, int i, int j, int type)
{
	if (type % 100 == 9 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j + 1] == 0 || d[0][i + 2][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i + 1][j + 1] = type;
		d[0][i + 2][j + 1] = type;
		return (1);
	}
	else if (type % 100 == 14 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
			 && (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
			 && (d[0][i + 1][j + 2] == 0 || d[0][i + 1][j + 2] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 1][j + 1] = type;
		d[0][i + 1][j + 2] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet15(int ***d, int i, int j, int type)
{
	if (type % 100 == 15 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i + 1][j] = type;
		d[0][i + 2][j] = type;
		return (1);
	}
	else if (type % 100 == 16 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
			 && (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i + 1][j + 1] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet11(int ***d, int i, int j, int type)
{
	if (type % 100 == 11 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1)
		&& (d[0][i + 2][j + 1] == 0 || d[0][i + 2][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 2][j] = type;
		d[0][i + 2][j + 1] = type;
		return (1);
	}
	else if (type % 100 == 12 && (d[0][i][j] == 0 || d[0][i][j] == 1)
			 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
			 && (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
			 && (d[0][i + 1][j + 2] == 0 || d[0][i + 1][j + 2] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i + 1][j + 2] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet5(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 5 && i > 0 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1)
		&& (d[0][i - 1][j + 2] == 0 || d[0][i - 1][j + 2] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i - 1][j + 1] = type;
		d[0][i - 1][j + 2] = type;
		return (1);
	}
	return (0);
}

int		ft_put_tet7(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && j == 0)
		j++;
	if (type % 100 == 7 && j > 0 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j - 1] == 0 || d[0][i + 1][j - 1] == 1)
		&& (d[0][i + 2][j - 1] == 0 || d[0][i + 2][j - 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 1][j - 1] = type;
		d[0][i + 2][j - 1] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet10(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 10 && i > 0 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
		&& (d[0][i - 1][j + 2] == 0 || d[0][i - 1][j + 2] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i - 1][j + 2] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet17(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 17 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& i > 0 && (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1)
		&& (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i - 1][j + 1] = type;
		d[0][i][j + 1] = type;
		d[0][i + 1][j + 1] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet18(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (type % 100 == 18 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& i > 0 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i][j + 2] == 0 || d[0][i][j + 2] == 1)
		&& (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i][j + 2] = type;
		d[0][i - 1][j + 1] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet19(int ***d, int i, int j, int type)
{
	if (type % 100 == 19 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& (d[0][i + 1][j] == 0 || d[0][i + 1][j] == 1)
		&& (d[0][i + 1][j + 1] == 0 || d[0][i + 1][j + 1] == 1)
		&& (d[0][i + 2][j] == 0 || d[0][i + 2][j] == 1))
	{
		d[0][i][j] = type;
		d[0][i + 1][j] = type;
		d[0][i + 1][j + 1] = type;
		d[0][i + 2][j] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_put_tet13(int ***d, int i, int j, int type)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i += 2;
	if (type % 100 == 13 && (d[0][i][j] == 0 || d[0][i][j] == 1)
		&& i > 1 && (d[0][i][j + 1] == 0 || d[0][i][j + 1] == 1)
		&& (d[0][i - 1][j + 1] == 0 || d[0][i - 1][j + 1] == 1)
		&& (d[0][i - 2][j + 1] == 0 || d[0][i - 2][j + 1] == 1))
	{
		d[0][i][j] = type;
		d[0][i][j + 1] = type;
		d[0][i - 1][j + 1] = type;
		d[0][i - 2][j + 1] = type;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet1(int ***d, int i, int j, int t)
{
	if (t % 100 == 1 && (d[0][i][j] == t) && (d[0][i + 1][j] == t)
		&& (d[0][i + 2][j] == t) && (d[0][i + 3][j] == t))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 2][j] = 0;
		d[0][i + 3][j] = 0;
		return (1);
	}
	else if (t % 100 == 2 && (d[0][i][j] == t)&& (d[0][i][j + 1] == t)
			 && (d[0][i][j + 2] == t) && (d[0][i][j + 3] == t))
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

int		ft_rem_tet3(int ***d, int i, int j, int t)
{
	if (t % 100 == 3 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
		&& (d[0][i + 1][j] == t) && (d[0][i + 1][j + 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		return (1);
	}
	else if (t % 100 == 4 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
			 && (d[0][i + 1][j + 1] == t) && (d[0][i + 1][j + 2] == t))
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

int		ft_rem_tet6(int ***d, int i, int j, int t)
{
	if (t % 100 == 6 && (d[0][i][j] == t) && (d[0][i + 1][j] == t)
		&& (d[0][i + 1][j + 1] == t) && (d[0][i + 2][j + 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 2][j + 1] = 0;
		return (1);
	}
	else if (t % 100 == 8 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
			 && (d[0][i][j + 2] == t) && (d[0][i + 1][j] == t))
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

int		ft_rem_tet9(int ***d, int i, int j, int t)
{
	if (t % 100 == 9 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
		&& (d[0][i + 1][j + 1] == t) && (d[0][i + 2][j + 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j + 1] = 0;
		d[0][i + 2][j + 1] = 0;
		return (1);
	}
	else if (t % 100 == 14 && (d[0][i][j] == t) && (d[0][i + 1][j] == t)
			 && (d[0][i + 1][j + 1] == t) && (d[0][i + 1][j + 2] == t))
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

int		ft_rem_tet15(int ***d, int i, int j, int t)
{
	if (t % 100 == 15 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
		&& (d[0][i + 1][j] == t) && (d[0][i + 2][j] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 2][j] = 0;
		return (1);
	}
	else if (t % 100 == 16 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
			 && (d[0][i][j + 2] == t) && (d[0][i + 1][j + 1] == t))
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

int		ft_rem_tet11(int ***d, int i, int j, int t)
{
	if (t % 100 == 11 && (d[0][i][j] == t) && (d[0][i + 1][j] == t)
		&& (d[0][i + 2][j] == t) && (d[0][i + 2][j + 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 2][j] = 0;
		d[0][i + 2][j + 1] = 0;
		return (1);
	}
	else if (t % 100 == 12 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
			 && (d[0][i][j + 2] == t) && (d[0][i + 1][j + 2] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i + 1][j + 2] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet5(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (t % 100 == 5 && i > 0 && (d[0][i][j] == t) && (d[0][i][j + 1] == t)
		&& (d[0][i - 1][j + 1] == t) && (d[0][i - 1][j + 2] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i - 1][j + 1] = 0;
		d[0][i - 1][j + 2] = 0;
		return (1);
	}
	return (0);
}

int		ft_rem_tet7(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && j == 0)
		j++;
	if (t % 100 == 7 && j > 0 && (d[0][i][j] == t) && (d[0][i + 1][j] == t)
		&& (d[0][i + 1][j - 1] == t) && (d[0][i + 2][j - 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i + 1][j] = 0;
		d[0][i + 1][j - 1] = 0;
		d[0][i + 2][j - 1] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet10(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (t % 100 == 10 && i > 0 && (d[0][i][j] == t)
		&& (d[0][i][j + 1] == t)
		&& (d[0][i][j + 2] == t)
		&& (d[0][i - 1][j + 2] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i][j + 2] = 0;
		d[0][i - 1][j + 2] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet13(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i += 2;
	if (t % 100 == 13 && (d[0][i][j] == t)
		&& i > 1 && (d[0][i][j + 1] == t)
		&& (d[0][i - 1][j + 1] == t)
		&& (d[0][i - 2][j + 1] == t))
	{
		d[0][i][j] = 0;
		d[0][i][j + 1] = 0;
		d[0][i - 1][j + 1] = 0;
		d[0][i - 2][j + 1] = 0;
		return (1);
	}
	else
		return (0);
}

int		ft_rem_tet17(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (t % 100 == 17 && (d[0][i][j] == t)
		&& i > 0 && (d[0][i - 1][j + 1] == t)
		&& (d[0][i][j + 1] == t)
		&& (d[0][i + 1][j + 1] == t))
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

int		ft_rem_tet18(int ***d, int i, int j, int t)
{
	if (d[0][0][0] == 1 && d[0][1][0] == 0 && d[0][0][1] == 0 && i == 0)
		i++;
	if (t % 100 == 18 && (d[0][i][j] == t)
		&& i > 0 && (d[0][i][j + 1] == t)
		&& (d[0][i][j + 2] == t)
		&& (d[0][i - 1][j + 1] == t))
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

int		ft_rem_tet19(int ***d, int i, int j, int t)
{
	if (t % 100 == 19 && (d[0][i][j] == t)
		&& (d[0][i + 1][j] == t)
		&& (d[0][i + 1][j + 1] == t)
		&& (d[0][i + 2][j] == t))
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


int	put_tetris(int ***desk, int i, int j, int type)
{
	if (ft_put_tet1(desk, i, j, type) || ft_put_tet3(desk, i, j, type)
		|| ft_put_tet5(desk, i, j, type) || ft_put_tet6(desk, i, j, type)
		|| ft_put_tet7(desk, i, j, type) || ft_put_tet9(desk, i, j, type)
		|| ft_put_tet10(desk, i, j, type) || ft_put_tet11(desk, i, j, type)
		|| ft_put_tet13(desk, i, j, type) || ft_put_tet15(desk, i, j, type)
		|| ft_put_tet17(desk, i, j, type) || ft_put_tet18(desk, i, j, type)
		|| ft_put_tet19(desk, i, j, type))
		return (1);
	else
		return (0);
}

int rem_tetris(int ***desk, int i, int j, int type)
{
	if (ft_rem_tet1(desk, i, j, type) || ft_rem_tet3(desk, i, j, type)
		|| ft_rem_tet5(desk, i, j, type) || ft_rem_tet6(desk, i, j, type)
		|| ft_rem_tet7(desk, i, j, type) || ft_rem_tet9(desk, i, j, type)
		|| ft_rem_tet10(desk, i, j, type) || ft_rem_tet11(desk, i, j, type)
		|| ft_rem_tet13(desk, i, j, type) || ft_rem_tet15(desk, i, j, type)
		|| ft_rem_tet17(desk, i, j, type) || ft_rem_tet18(desk, i, j, type)
		|| ft_rem_tet19(desk, i, j, type))
		return (1);
	else
		return (0);
}

int		x(char *b, int f_s, int i)
{
	if (i < 4 && b[i] == '#' && b[i + 5] == '#'
		&& b[i + 10] == '#' && b[i + 15] == '#')
		f_s += 1;
	else if (i % 5 == 0 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 2] == '#' && b[i + 3] == '#')
		f_s += 2;
	else if (i < 13 && i % 5 < 3 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 5] == '#' && b[i + 6] == '#')
		f_s += 3;
	else if (i < 12 && i % 5 < 2 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 6] == '#' && b[i + 7] == '#')
		f_s += 4;
	else if (i < 13 && i % 5 < 3 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 4] == '#' && b[i + 5] == '#')
		f_s += 5;
	else if (i < 8 && i % 5 < 3 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 6] == '#' && b[i + 11] == '#')
		f_s += 6;
	else
		return (0);
	return (f_s);
}

int		y(char *b, int f_s, int i)
{
	if (i % 5 > 0 && i < 9 && b[i] == '#' && b[i + 4] == '#'
		&& b[i + 5] == '#' && b[i + 9] == '#')
		f_s += 7;
	else if (i < 12 && i % 5 < 2 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 2] == '#' && b[i + 5] == '#')
		f_s += 8;
	else if (i < 8 && i % 5 < 3 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 6] == '#' && b[i + 11] == '#')
		f_s += 9;
	else if (i < 14 && i % 5 > 1 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 4] == '#' && b[i + 3] == '#')
		f_s += 10;
	else if (i < 8 && i % 5 < 3 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 10] == '#' && b[i + 11] == '#')
		f_s += 11;
	else if (i < 12 && i % 5 < 3 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 2] == '#' && b[i + 7] == '#')
		f_s += 12;
	else
		return (0);
	return (f_s);
}

int		z(char *b, int f_s, int i)
{
	if (i < 9 && i % 5 > 0 && b[i] == '#' && b[i + 5] == '#'
		&& b[i + 10] == '#' && b[i + 9] == '#')
		f_s += 13;
	else if (i < 12 && i % 5 < 2 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 6] == '#' && b[i + 7] == '#')
		f_s += 14;
	else if (i < 8 && i % 5 < 3 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 5] == '#' && b[i + 10] == '#')
		f_s += 15;
	else if (i < 12 && i % 5 < 2 && b[i] == '#' && b[i + 1] == '#'
			 && b[i + 2] == '#' && b[i + 6] == '#')
		f_s += 16;
	else if (i < 9 && i % 5 > 0 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 10] == '#' && b[i + 4] == '#')
		f_s += 17;
	else if (i < 13 && i % 5 > 0 && i % 5 < 3 && b[i] == '#'
			 && b[i + 5] == '#' && b[i + 4] == '#' && b[i + 6] == '#')
		f_s += 18;
	else if (i < 8 && i % 5 < 3 && b[i] == '#' && b[i + 5] == '#'
			 && b[i + 10] == '#' && b[i + 6] == '#')
		f_s += 19;
	else
		return (0);
	return (f_s);
}

int		ft_assign_fs(char *b, int **f_s, int count_hash)
{
	int		i;
	int		j;
	
	if (count_hash != 4)
		return (-1);
	j = 0;
	while (j < 26 && f_s[0][j] != -1)
		j++;
	f_s[0][j + 1] = -1;
	f_s[0][j] = 10000 + (('A' + j) * 100);
	i = -1;
	while (i < 20)
	{
		++i;
		if (b[i] == '#')
		{
			if (x(b, f_s[0][j], i) || y(b, f_s[0][j], i) || z(b, f_s[0][j], i))
				f_s[0][j] = x(b, f_s[0][j], i) + y(b, f_s[0][j], i)
				+ z(b, f_s[0][j], i);
			else
				return (-1);
			break ;
		}
	}
	return (1);
}

int		ft_termin_b(char **b)
{
	b[0][(int)ft_strlen(b[0]) - 21] = '\0';
	return (1);
}

int		ft_check_content(char *b, int **f_s)
{
	int		i;
	int		count_hash;
	
	count_hash = 0;
	i = -1;
	if (b[4] != '\n' || b[9] != '\n' || b[14] != '\n' || b[19] != '\n')
		return (-1);
	while (i < 20)
	{
		++i;
		if (!(b[i] == '.' || b[i] == '#' || b[i] == '\n' || b[i] == '\0'))
			return (-1);
		else if (b[i] == '#')
			count_hash++;
	}
	if (ft_assign_fs(b, f_s, count_hash) == -1)
		return (-1);
	i = (int)ft_strlen(b) - 21;
	if (i > 0)
		b = ft_memmove((void*)b, (const void*)&b[21], i);
	else if (f_s[0][26] < 0 || i < 0)
		return (0);
	else if (i == 0)
		return (-1);
	return (ft_termin_b(&b));
}

int		ft_check_file(int fd, int **f_s)
{
	char	*buf;
	size_t	ret;
	int		is_ok;
	
	buf = (char*)ft_memalloc(550);
	ret = read(fd, buf, 548);
	if (ret < 1 || ret > 547)
	{
		free(buf);
		return (-1);
	}
	is_ok = 1;
	while (is_ok != 0)
	{
		is_ok = ft_check_content(buf, f_s);
		if (is_ok == -1)
		{
			free(buf);
			return (-1);
		}
	}
	free(buf);
	return (1);
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

int			ft_checkdesk(int ***d)
{
	int		i;
	int		j;
	int		counter;
	
	j = 0;
	counter = 0;
	while (d[0][0][j] > -1)
		j++;
	i = j;
	while (i > -1)
	{
		while(j > -1)
		{
			if (d[0][i][j] > 0)
				counter++;
			j--;
		}
		i++;
	}
	return (counter / 4);
}

int			check_figs(int *f_s)
{
	int		k;
	
	k = 0;
	while (f_s[k] > -1)
	{
		if (f_s[k] > 10000)
			return (k);
	}
	return (-1);
}

int			check_side(int ***d)
{
	int		i;
	
	i = 0;
	while (d[0][0][i] > -1)
		i++;
	return (i);
}

int			ft_fillit(int *f_s, int ***d)
{
	int		i;
	int		j;
	int		k;
	int		side;

	k = check_figs(f_s);
	if(k == -1)
	{
		ft_putdesk(*d);
		exit (1);
	}
	side = check_side(d);
	i = 0;
	while (i < side)
	{
		j = 0;
		while (j < side)
		{
			if (put_tetris(d, i, j, f_s[k]))
			{
				ft_putdesk(*d);
				printf("\n\n");
//				f_s[0][k] -= 10000;
				if (ft_fillit(&f_s[1], d))
					return(1);
				else
				{
//					f_s[0][k] += 10000;
					rem_tetris(d, i, j, f_s[k]);
				}
			}
			j++;
		}
		i++;
	}
	return(0);
}

/*
 int			ft_fillit(int **f_s, int ***d, int i, int j)
 {
	int		k;
 
	if (d[0][i][j] != 1 && d[0][i][j] != 0)
 return (0);
	if(check_figs(f_s))
	{
 ft_putdesk(*d);
 exit (1);
	}
	k = 0;
	while (f_s[0][k] > 0 && f_s[0][k] < 10000)
 k++;
	if (put_tetris(d, i, j, f_s[0][k]))
	{
 f_s[0][k] -= 10000;
 if(ft_fillit(f_s, d, 0, 0))
 return(1);
 else
 {
 if(f_s[0][k] < 10000)
 f_s[0][k] += 10000;
 rem_tetris(d, i, j, f_s[0][k]);
 //			ft_putdesk(*d);
 //			printf("^AFTER\n\n");
 if (!ft_fillit(f_s, d, i, j + 1) && !ft_fillit(f_s, d, i + 1, j))
 return(0);
 }
	}
	else
	{
 if(f_s[0][k] < 10000)
 f_s[0][k] += 10000;
 
 rem_tetris(d, i, j, f_s[0][k]);
 if (!ft_fillit(f_s, d, i, j + 1) && !ft_fillit(f_s, d, i + 1, j))
 return(0);
	}
	return(0);
 }

 */

int			find_side(int **f_s)
{
	int		i;
	int		side;
	
	i = 0;
	side = 0;
	while(f_s[0][i] > 0)
		i++;
	while (side * side < i * 4)
		side++;
	return (side);
	
}

void		check_if_filled(int **f_s, int ***desk, int side, int n)
{
	int		check;
	
	check = ft_fillit(*f_s, desk);
	while (!check)
	{
		side++;
		ft_free_df(desk, &f_s, 0);
		*desk = ft_create_desk(side, *desk);
		check = ft_fillit(*f_s, desk);
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
				desk = ft_create_desk(find_side(f_s), desk);
				check_if_filled(f_s, &desk, 2, 0);
			}
			else
				ft_putstr("error\n");
		else
			ft_putstr("error\n");
	else
		ft_putstr("usage: fillit filename\n");
	free(desk);
	return (0);
}
