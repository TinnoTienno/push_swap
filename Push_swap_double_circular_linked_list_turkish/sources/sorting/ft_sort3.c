/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:17:02 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:55:45 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort3(t_pslist *a, t_pslist *b)
{
	if (a->head->value < a->head->next->value && a->head->next->value < a->head->previous->value)
	{
		return ;
	}
	if (a->head->previous->value < a->head->value && a->head->value < a->head->next->value)
	{
		ft_reverse_rotate_a(a, b, 1);
		ft_sort3(a, b);
	}
	else if (a->head->next->value < a->head->previous->value && a->head->previous->value < a->head->value)
	{
		ft_rotate_a(a, b, 1);
		ft_sort3(a, b);
	}
	else
	{
		ft_swap_a(a, b, 1);
		ft_sort3(a, b);
	}
	
}
