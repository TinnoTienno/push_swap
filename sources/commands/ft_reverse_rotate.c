/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:07:39 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 14:15:25 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_PSlist *a, t_PSlist *b)
{
	t_PSelement	*index;
	
	(void) b;
	index = a->first;
	while (index->next->next)
		index = index->next;
	index->next->next = a->first;
	a->first = index->next;
	index->next = NULL;
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_PSlist *a, t_PSlist *b)
{
	t_PSelement	*index;
	
	(void) a;
	index = b->first;
	while (index->next->next)
		index = index->next;
	index->next->next = b->first;
	b->first = index->next;
	index->next = NULL;
	ft_printf("rrb\n");
}

void	ft_reverse_rotate_both(t_PSlist *a, t_PSlist *b)
{
	t_PSelement	*index;

	index = a->first;
	while (index->next->next)
		index = index->next;
	index->next->next = a->first;
	a->first = index->next;
	index->next = NULL;
	index = b->first;
	while (index->next->next)
		index = index->next;
	index->next->next = b->first;
	b->first = index->next;
	index->next = NULL;
	ft_printf("rrr\n");
}