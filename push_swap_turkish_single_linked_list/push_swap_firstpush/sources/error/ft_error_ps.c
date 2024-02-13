/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_ps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:00:00 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 16:01:20 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_atoierror(char *str)
{
	int		i;
	long	res;
	int		sign;
	
	i = 0;
	res = 0;
	sign = 1;
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

int	ft_error_ps(char *str, t_pslist	*a)
{
	t_pselement	*elem;
	
	if (ft_atoierror(str))
		return (ft_printf_fd(2, "error\n"), 1);
	elem = a->head;
	while (elem)
	{
		if (elem->value == ft_atoi(str))
			return (ft_printf_fd(2, "error\n"), 1);
		elem = elem->next;
	}
	return 0;
}