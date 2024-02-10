/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmovetoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:31:32 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:55:30 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbmovetoa(t_pslist *a, int value)
{
	int	count;
	t_pselement *elem;
	int			med;
	
	if (a->total %2 == 0)
		med = a->total / 2 - 1;
	else
		med = a->total / 2;
	elem = a->head;
	count = 0;
	if (value > a->max || value < a->min)
	{
		while(elem->value != a->min)
		{
			count++;
			elem = elem->next;
		}
	}
	else
	{
		while (!(elem->value > value && elem->previous->value < value))
		{
			count++;
			elem = elem->next;
		}
	}
	if (count > med)
		count = -(a->total - count);
	return (count);
}
