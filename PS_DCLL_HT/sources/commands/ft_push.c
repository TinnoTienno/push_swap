/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:07:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:36:34 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_push(t_pslist *sortant, t_pslist *entrant)
{
	t_pselement	*elem;

	elem = sortant->head;
	if (sortant->head == sortant->head->next)
		sortant->head = NULL;
	else
	{
		sortant->head = sortant->head->next;
		sortant->head->previous = elem->previous;
		sortant->head->previous->next = sortant->head;
	}
	if (!entrant->head)
	{
		entrant->head = elem;
		entrant->head->next = entrant->head;
		entrant->head->previous = entrant->head;
	}
	else
	{
		elem->next = entrant->head;
		elem->previous = entrant->head->previous;
		entrant->head->previous = elem;
		entrant->head = elem;
		entrant->head->previous->next = entrant->head;
	}
}

void	ft_push_b(t_pslist *a, t_pslist *b, int p)
{
	if (a->head->index > b->max)
		b->max = a->head->index;
	if (a->head->index < b->min)
		b->min = a->head->index;
	ft_push(a, b);
	a->total--;
	b->total++;
	if (p)
		ft_printf("pb\n");
}

void	ft_push_a(t_pslist *a, t_pslist *b, int p)
{
	if (b->head->index > a->max)
		a->max = b->head->index;
	if (b->head->index < a->min)
		a->min = b->head->index;
	ft_push(b, a);
	a->total++;
	b->total--;
	if (p)
		ft_printf("pa\n");
}
