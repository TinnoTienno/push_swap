/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:38:30 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:13:59 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_swap(t_pslist *list)
{
	t_pselement *elem;
	
	
	elem = list->head;
	list->head = list->head->next;
	list->head->previous = elem->previous;
	list->head->previous->next = list->head;
	elem->next = list->head->next;
	list->head->next->previous = elem;
	elem->previous = list->head;
	list->head->next = elem;
}
int	ft_swap_a(t_pslist *a, t_pslist *b, int p)
{	
	(void) b;
	if (!a->head || !a->head->next)
		return 1;
	ft_swap(a);
	if (p)
		ft_printf("sa\n");
	return 1;
}

int	ft_swap_b(t_pslist *a, t_pslist *b, int p)
{	
	(void) a;
	if (!b->head || !b->head->next)
		return 1;
	ft_swap(b);
	if (p)
		ft_printf("sb\n");
	return 1;
}

int	ft_swap_both(t_pslist *a, t_pslist *b, int p)
{	
	if (!a->head || !a->head->next)
		return (ft_swap_b(a, b, p));
	if (!b->head || !b->head->next)
		return (ft_swap_a(a, b, p));
	ft_swap(a);
	ft_swap(b);
	if (p)
		ft_printf("ss\n");
	return 1;
}