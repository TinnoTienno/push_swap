/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:47:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:26 by eschussl         ###   ########.fr       */
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
	tmp->next = a->head;
	a->head = tmp;
	a->total++;
	b->total--;
	ft_printf("pa\n");
	
}

void	ft_push_b(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	if (!a->head)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	tmp->next = b->head;
	b->head = tmp;
	b->total++;
	a->total--;
	ft_printf("pb\n");
}