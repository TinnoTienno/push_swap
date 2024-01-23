/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:27:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 11:48:55 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	ft_swap_a(t_pslist *a, t_pslist *b)
{
	(void) b;
	t_pselement *tmp;
	
	tmp = a->head;
	a->head = a->head->next;
	a->head->next = tmp;
	ft_printf("sa\n");
}

void 	ft_swap_b(t_pslist *a, t_pslist *b)
{
	(void) a;
	t_pselement *tmp;
	
	tmp = b->head;
	b->head = b->head->next;
	b->head->next = tmp;
	ft_printf("sb\n");
}

void	ft_swap_both(t_pslist *a, t_pslist *b)
{
	t_pselement *tmp;
	
	tmp = a->head;
	a->head = a->head->next;
	a->head->next = tmp;
	tmp = b->head;
	b->head = b->head->next;
	b->head->next = tmp;
	ft_printf("ss\n");
}
