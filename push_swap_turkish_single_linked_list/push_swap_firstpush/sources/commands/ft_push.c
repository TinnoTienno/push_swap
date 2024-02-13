/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:26:25 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 16:05:00 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_push_a(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *elem;

	if (!b->head)
		return ;
	elem = b->head;
	b->head = b->head->next;
	elem->next = a->head;
	a->head = elem;
	b->total--;
	a->total++;
	if (p)
		ft_printf_fd(1, "pa\n");
}

void ft_push_b(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *elem;

	if (!a->head)
		return ;
	elem = a->head;
	a->head = a->head->next;
	elem->next = b->head;
	b->head = elem;
	b->total++;
	a->total--;
	if (p)
		ft_printf_fd(1, "pb\n");
}