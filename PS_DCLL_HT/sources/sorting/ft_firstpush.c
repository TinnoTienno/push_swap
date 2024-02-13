/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstpush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:41:28 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:28:29 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_secondhalf(t_pslist *a, t_pslist *b, t_psstruct *solved)
{
	while (a->total > 3)
	{
		ft_push_b(a, b, 1);
		if (a->head->index < solved->tabint[solved->total / 2 \
		+ solved->total / 4])
			ft_rotate_a(a, b, 1);
	}
}

static void	ft_firsthalf(t_pslist *a, t_pslist *b, t_psstruct *solved)
{
	while (a->total >= b->total + 2)
	{
		if (a->head->index < solved->tabint[solved->total / 2])
		{
			ft_push_b(a, b, 1);
			if (b->head->index <= solved->tabint[solved->total / 4])
			{
				if (a->head->index >= solved->tabint[solved->total / 2])
					ft_rotate_both(a, b, 1);
				else
					ft_rotate_b(a, b, 1);
			}
		}
		else
			ft_rotate_a(a, b, 1);
	}
}

void	ft_firstpush(t_pslist *a, t_pslist *b, t_psstruct *solved)
{
	ft_firsthalf(a, b, solved);
	ft_secondhalf(a, b, solved);
	ft_sort3(a, b);
}
