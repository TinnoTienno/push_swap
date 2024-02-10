/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:59:49 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 21:12:44 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int ft_nberror(char *str)
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
int	ft_doubleerror(int nb, t_psstruct *s_ps, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (s_ps->tabint[i] == nb)
			return (1);
		i++;
	}
	return (0);
}

int	ft_error(char **tab, int i, t_psstruct *s_ps)
{
	if (ft_nberror(tab[i]))
		return (1);
	if (ft_doubleerror(ft_atoi(tab[i]), s_ps, i))
		return (1);
	return (0);
}