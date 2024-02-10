/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:55:27 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 13:37:28 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	(void) b;
	if (!a->head)
		return ;
	if (a->total == 1)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	a->tail->next = tmp;
	tmp->previous = a->tail;
	a->tail = tmp;
	tmp->next = NULL;
	a->head->previous = NULL;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	(void) a;
	if (!b->head)
		return ;
	if (b->total == 1)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	b->tail->next = tmp;
	tmp->previous = b->tail;
	b->tail = tmp;
	tmp->next = NULL;
	b->head->previous = NULL;
	ft_printf("rb\n");
}

void	ft_rotate_both(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	if (!b->head || b->total == 1 || !a->head || a->total == 1)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	b->tail->next = tmp;
	tmp->previous = b->tail;
	b->tail = tmp;
	tmp->next = NULL;
	b->head->previous = NULL;
	tmp = a->head;
	a->head = a->head->next;
	a->tail->next = tmp;
	tmp->previous = a->tail;
	a->tail = tmp;
	tmp->next = NULL;
	a->head->previous = NULL;
	ft_printf("rr\n");

}
