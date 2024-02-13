/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:17:02 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:34:51 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort3(t_pslist *a, t_pslist *b)
{
	if (a->head->index < a->head->next->index && \
	a->head->next->index < a->head->previous->index)
	{
		a->max = a->head->previous->index;
		a->min = a->head->index;
		return ;
	}
	if (a->head->previous->index < a->head->index \
	&& a->head->index < a->head->next->index)
	{
		ft_reverse_rotate_a(a, b, 1);
		ft_sort3(a, b);
	}
	else if (a->head->next->index < a->head->\
	previous->index && a->head->previous->index < a->head->index)
	{
		ft_rotate_a(a, b, 1);
		ft_sort3(a, b);
	}
	else
	{
		ft_swap_a(a, b, 1);
		ft_sort3(a, b);
	}
}
