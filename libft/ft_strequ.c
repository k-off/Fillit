/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strequ.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 17:49:48 by pacovali      #+#    #+#                 */
/*   Updated: 2019/01/14 14:06:54 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned long int	i;

	i = 0;
	if (s1 != 0 && s2 != 0)
	{
		while (s1[i] == s2[i] && !(s1[i] == '\0' || s2[i] == '\0'))
			i++;
		if (s1[i] == s2[i] && s1[i] == '\0' && s2[i] == '\0')
			return (1);
	}
	return (0);
}
