/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:12:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 15:02:41 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rotate_a(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	t_pselement	*current;

	(void) b;
	if (!a->head)
		return ;
	tmp = a->head;
	a->head = a->head->next;
	current = a->head;
	while (current->next != a->head)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "ra\n");
}
void ft_rotate_b(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	t_pselement	*current;

	(void) a;
	if (!b->head)
		return ;
	tmp = b->head;
	b->head = b->head->next;
	current = b->head;
	while (current->next != b->head)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "rb\n");
}
void ft_rotate_both(t_pslist *a, t_pslist *b, int p)
{
	t_pselement *tmp;
	t_pselement	*current;
	
	if (!a->head)
		ft_rotate_b(a, b, p);
	if (!b->head)
		ft_rotate_a(a, b, p);
	tmp = a->head;
	a->head = a->head->next;
	current = a->head;
	while (current->next != a->head)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	tmp = b->head;
	b->head = b->head->next;
	current = b->head;
	while (current->next != b->head)
		current = current->next;
	current->next = tmp;
	tmp->next = NULL;
	if (p)
		ft_printf_fd(1, "rr\n");
}
