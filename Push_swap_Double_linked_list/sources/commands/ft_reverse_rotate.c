/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:07:39 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:35 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_pslist *a, t_pslist *b)
{
	t_pselement	*index;
	
	(void) b;
	index = a->head;
	while (index->next->next)
		index = index->next;
	index->next->next = a->head;
	a->head = index->next;
	index->next = NULL;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_pslist *a, t_pslist *b)
{
	t_pselement	*index;
	
	(void) a;
	index = b->head;
	while (index->next->next)
		index = index->next;
	index->next->next = b->head;
	b->head = index->next;
	index->next = NULL;
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_both(t_pslist *a, t_pslist *b)
{
	t_pselement	*index;

	index = a->head;
	while (index->next->next)
		index = index->next;
	index->next->next = a->head;
	a->head = index->next;
	index->next = NULL;
	index = b->head;
	while (index->next->next)
		index = index->next;
	index->next->next = b->head;
	b->head = index->next;
	index->next = NULL;
	ft_printf("rrr\n");
}