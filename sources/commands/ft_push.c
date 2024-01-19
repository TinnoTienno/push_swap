/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 13:47:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 13:54:43 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(t_PSlist *a, t_PSlist *b)
{
	t_PSelement *tmp;
	
	if (!b->first)
		return ;
	tmp = b->first;
	b->first = b->first->next;
	tmp->next = a->first;
	a->first = tmp;
	a->total++;
	b->total--;
	ft_printf("pa\n");
	
}

void	ft_push_b(t_PSlist *a, t_PSlist *b)
{
	t_PSelement *tmp;
	
	if (!a->first)
		return ;
	tmp = a->first;
	a->first = a->first->next;
	tmp->next = b->first;
	b->first = tmp;
	b->total++;
	a->total--;
	ft_printf("pb\n");
}