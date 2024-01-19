/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:55:27 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 14:12:48 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_PSlist *a, t_PSlist *b)
{
	(void) b;
	t_PSelement *tmp;
	t_PSelement *index;
	
	tmp = a->first;
	a->first = a->first->next;
	index = a->first;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("ra\n");
}

void	ft_rotate_b(t_PSlist *a, t_PSlist *b)
{
	(void) a;
	t_PSelement *tmp;
	t_PSelement *index;
	
	tmp = b->first;
	b->first = b->first->next;
	index = b->first;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("rb\n");
}

void	ft_rotate_both(t_PSlist *a, t_PSlist *b)
{
	t_PSelement *tmp;
	t_PSelement *index;
	
	tmp = a->first;
	a->first = a->first->next;
	index = a->first;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	tmp = b->first;
	b->first = b->first->next;
	index = b->first;
	while (index->next)
		index = index->next;
	index->next = tmp;
	tmp->next = NULL;
	ft_printf("rr\n");
}