/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 00:27:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:34:35 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"

void 		ft_swap_a(t_PSlist *a, t_PSlist *b)
{
	(void) b;
	t_PSelement *tmp;
	
	tmp = a->first;
	a->first = a->first->next;
	a->first->next = tmp;
	ft_printf("sa\n");
}

void 		ft_swap_b(t_PSlist *a, t_PSlist *b)
{
	(void) a;
	t_PSelement *tmp;
	
	tmp = b->first;
	b->first = b->first->next;
	b->first->next = tmp;
	ft_printf("sb\n");
}
