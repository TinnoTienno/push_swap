/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:26:44 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:33:17 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	
	(void) b;
	if (!a->head || !a->head->next)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	tmp->next = a->head->next;
	a->head->next = tmp;
	if (p)
		ft_printf_fd(1, "sa\n");
}

void	ft_swap_b(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	
	(void) a;
	if (!b->head || !b->head->next)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	tmp->next = b->head->next;
	b->head->next = tmp;
	if (p)
		ft_printf_fd(1, "sb\n");
}

void	ft_swap_both(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	
	if (!a->head || !a->head->next)
		return (ft_swap_b(a, b, p));
	if (!b->head || !b->head->next)
		return (ft_swap_a(a, b, p));
	tmp = a->head;
	a->head = a->head->next;
	tmp->next = a->head->next;
	a->head->next = tmp;
	tmp = b->head;
	b->head = b->head->next;
	tmp->next = b->head->next;
	b->head->next = tmp;
	if (p)
		ft_printf_fd(1, "ss\n");
}
