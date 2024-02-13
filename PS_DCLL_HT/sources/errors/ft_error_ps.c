/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_ps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:08:48 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:21:04 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_nberror(char *str)
{
	int		i;
	long	res;
	int		sign;

	i = 0;
	res = 0;
	sign = 1;
	if (!str[0])
		return (1);
	if (str[0] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		res = res * 10 + str[i] + '0';
		i++;
	}
	res = res * sign;
	if (res < -2147483648 || res > 2147483647)
		return (1);
	return (0);
}

static int	ft_duplicaterror(int nb, int index, int *tabint)
{
	int	i;

	if (!tabint)
		return (0);
	i = -1;
	while (++i < index)
	{
		if (nb == tabint[i])
			return (1);
	}
	return (0);
}

int	ft_error_ps(char **tab, int index, int *tabint)
{
	if (ft_nberror(tab[index]))
		return (ft_printf_fd(2, "error\n"), 1);
	if (ft_duplicaterror(ft_atoi(tab[index]), index, tabint))
		return (ft_printf_fd(2, "error\n"), 1);
	return (0);
}
