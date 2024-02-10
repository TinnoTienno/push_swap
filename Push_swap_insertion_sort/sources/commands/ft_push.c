/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:47:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 16:20:33 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	if (!b->head)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	if (a->head)
		tmp->next = a->head;
	else
		tmp->next = NULL;
	a->head = tmp;
	b->total--;
	a->total++;
	if (b->head) 
		b->head->previous = NULL;
	if (a->head->next)
		a->head->next->previous = a->head;
	else
		a->tail = a->head;
	ft_printf("pa\n");
}

void	ft_push_b(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;

	if (!a->head)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	if (b->head)
		tmp->next = b->head;
	else
		tmp->next = NULL;
	b->head = tmp;
	a->total--;
	b->total++;
	if (a->head) 
		a->head->previous = NULL;
	if (b->head->next)
		b->head->next->previous = b->head;
	else
		b->tail = b->head;
	ft_printf("pb\n");
}