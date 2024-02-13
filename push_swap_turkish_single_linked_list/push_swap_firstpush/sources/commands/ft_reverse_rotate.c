/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:20:02 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 15:01:28 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_pslist *a, t_pslist *b, int p)
{
	t_pselement	*tmp;
	
	(void) b;
	tmp = a->head;
	while (tmp->next->next != a->head)
		tmp = tmp->next;
	tmp->next->next = a->head;
	a->head = tmp->next;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "rra\n");
}

void	ft_reverse_rotate_b(t_pslist *a, t_pslist *b, int p)
{
	t_pselement	*tmp;

	(void) b;
	tmp = b->head;
	while (tmp->next->next != b->head)
		tmp = tmp->next;
	tmp->next->next = b->head;
	b->head = tmp->next;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "rrb\n");
}

void	ft_reverse_rotate_both(t_pslist *a, t_pslist *b, int p)
{
	t_pselement	*tmp;
	
	if (!a->head)
		return (ft_reverse_rotate_b(a, b, p), (void) 1);
	if (!b->head)
		return (ft_reverse_rotate_a(a, b, p), (void) 1);
	tmp = a->head;
	while (tmp->next->next != a->head)
		tmp = tmp->next;
	tmp->next->next = a->head;
	a->head = tmp->next;
	tmp->next = NULL;
	tmp = b->head;
	while (tmp->next->next != b->head)
		tmp = tmp->next;
	tmp->next->next = b->head;
	b->head = tmp->next;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "rrr\n");
}
