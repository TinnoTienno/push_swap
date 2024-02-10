/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:07:39 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 13:38:25 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	(void) b;
	if (!a->head)
		return ;
	if (!a->head->next)
		return ;
	tmp = a->tail;
	a->tail->previous->next = NULL;
	a->tail = a->tail->previous;
	tmp->next = a->head;
	a->head = tmp;
	a->head->previous = NULL;
	a->head->next->previous = a->head;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_pslist *a, t_pslist *b)
{
	t_pselement	*tmp;
	
	(void) a;
	if (!b->head)
		return ;
	if (!b->head->next)
		return ;
	tmp = b->tail;
	b->tail->previous->next = NULL;
	b->tail = b->tail->previous;
	tmp->next = b->head;
	b->head = tmp;
	b->head->previous = NULL;
	b->head->next->previous = b->head;
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_both(t_pslist *a, t_pslist *b)
{
	t_pselement	*tmp;
	if (!b->head || b->total == 1 || !a->head || a->total == 1)
		return ;
	tmp = a->tail;
	a->tail->previous->next = NULL;
	a->tail = a->tail->previous;
	tmp->next = a->head;
	a->head = tmp;
	a->head->previous = NULL;
	a->head->next->previous = a->head;
	tmp = b->tail;
	b->tail->previous->next = NULL;
	b->tail = b->tail->previous;
	tmp->next = b->head;
	b->head = tmp;
	b->head->previous = NULL;
	b->head->next->previous = b->head;
	ft_printf("rrr\n");
}
