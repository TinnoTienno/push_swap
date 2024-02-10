/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lookformin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:04:05 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:41:35 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lookformin(t_pslist *a, t_pslist *b)
{
	int med;
	int count;
	t_pselement *elem;
	
	count = 0;
	if (a->total %2 == 0)
		med = a->total / 2 -1;
	else
		med = a->total / 2;
	elem = a->head;	
	while (elem->value != a->min)
	{
		count++;
		elem = elem->next;
	}
	if (count > med)
			count = -(a->total - count);
	while (count > 0)
	{
		ft_rotate_a(a, b, 1);
		count--;
	}
	while (count < 0)
	{
		ft_reverse_rotate_a(a, b, 1);
		count++;
	}
}