/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:59:49 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:51:42 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int ft_error(char *str)
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
