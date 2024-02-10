/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:27:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 13:38:15 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	ft_swap_a(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	(void) b;
	if (!a->head)
		return ;
	if (!a->head->next)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	tmp->next = a->head->next;
	a->head->next = tmp;
	a->head->previous = NULL;
	if (a->head->next->next)
		a->head->next->next->previous = a->head->next;
	a->head->next->previous = a->head;
	ft_printf("sa\n");
}

void 	ft_swap_b(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	(void) a;
	if (!b->head)
		return ;
	if (!b->head->next)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	tmp->next = b->head->next;
	b->head->next = tmp;
	b->head->previous = NULL;
	if (b->head->next->next)
		b->head->next->next->previous = b->head->next;
	b->head->next->previous = b->head;
	ft_printf("sb\n");
}

void	ft_swap_both(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	if (!b->head || b->total == 1 || !a->head || a->total == 1)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	tmp->next = a->head->next;
	a->head->next = tmp;
	a->head->previous = NULL;
	if (a->head->next->next)
		a->head->next->next->previous = a->head->next;
	a->head->next->previous = a->head;
	tmp = b->head;
	b->head = b->head->next;
	tmp->next = b->head->next;
	b->head->next = tmp;
	b->head->previous = NULL;
	if (b->head->next->next)
		b->head->next->next->previous = b->head->next;
	b->head->next->previous = b->head;
	ft_printf("ss\n");
}
