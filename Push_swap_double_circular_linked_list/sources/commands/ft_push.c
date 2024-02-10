/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:07:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 17:36:07 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_push(t_pslist *list1, t_pslist *list2)
{
	t_pselement	*elem;

	elem = list1->head;
	if (!list1->head->next)
		list1->head = NULL;
	else
	{
		list1->head = list1->head->next;
		list1->head->previous = elem->previous;
		list1->head->previous->next = list1->head;
	}
	if (!list2->head)
	{
		list2->head = elem;
		list2->head->next = list2->head;
		list2->head->previous = list2->head;
	}
	else
	{
		elem->next = list2->head;
		elem->previous = list2->head->previous;
		list2->head->previous = elem;
		list2->head = elem;
		list2->head->previous->next = list2->head;
	}
}

void	ft_push_b(t_pslist *a, t_pslist *b, int p)
{
	ft_push(a, b);
	a->total--;
	b->total++;
	if (p)
		ft_printf("pb\n");
}

void	ft_push_a(t_pslist *a, t_pslist *b, int p)
{
	ft_push(b, a);
	a->total++;
	b->total--;
	if (p)
		ft_printf("pa\n");
}

