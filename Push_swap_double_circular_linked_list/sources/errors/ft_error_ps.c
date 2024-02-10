/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_ps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:08:48 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 16:51:16 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_nberror(char *str)
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

static int	ft_duplicaterror(int nb, t_pslist *a)
{
	t_pselement *elem;

	if (!a->head)
		return (0);
	if (nb == a->head->value)
		return (1);
	if (!a->head->next)
		return (0);
	elem = a->head->next;
	while (elem != a->head)
	{
		if (elem->value == nb)
			return (1);
		elem = elem->next;
	}
	return (0);
}

int	ft_error_ps(char *str, t_pslist *a)
{
	if (ft_nberror(str))
		return (ft_printf_fd(2, "error\n"), 1);
	if (ft_duplicaterror(ft_atoi(str), a))
		return (ft_printf_fd(2, "error\n"), 1);
	return (0);
}