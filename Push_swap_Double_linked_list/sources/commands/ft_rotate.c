/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:55:27 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:45 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_pslist *a, t_pslist *b)
{
	(void) b;
	t_pselement *tmp;
	t_pselement *index;
	
	tmp = a->head;
	a->head = a->head->next;
	index = a->head;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_pslist *a, t_pslist *b)
{
	(void) a;
	t_pselement *tmp;
	t_pselement *index;
	
	tmp = b->head;
	b->head = b->head->next;
	index = b->head;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	ft_rotate_both(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	t_pselement *index;
	
	tmp = a->head;
	a->head = a->head->next;
	index = a->head;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	tmp = b->head;
	b->head = b->head->next;
	index = b->head;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("rr\n");
}