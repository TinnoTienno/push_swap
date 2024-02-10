/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:07:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:33:32 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void ft_push(t_pslist *sortant, t_pslist *entrant)
{
	t_pselement	*elem;

	elem = sortant->head;
	if (sortant->head  == sortant->head->next)
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

int	ft_push_b(t_pslist *a, t_pslist *b, int p)
{
	if (a->head->value > b->max)
		b->max = a->head->value;
	if (a->head->value < b->min)
		b->min = a->head->value;
	ft_push(a, b);
	a->total--;
	b->total++;
	if (p)
		ft_printf("pb\n");
	return 1;
}

int	ft_push_a(t_pslist *a, t_pslist *b, int p)
{
	if (b->head->value > a->max)
		a->max = b->head->value;
	if (b->head->value < a->min)
		a->min = b->head->value;
	ft_push(b, a);
	a->total++;
	b->total--;
	if (p)
		ft_printf("pa\n");
	return 1;
}

