/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fillit.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/31 15:37:32 by pacovali      #+#    #+#                 */
/*   Updated: 2019/02/07 09:26:05 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
