/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortthree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:17:02 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 14:54:56 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static void ft_swap_rotate(t_pslist *list, t_pslist *a, t_pslist *b)
{
	if (list->name == 'a')
	{
		ft_rotate_a(a, b, 1);
		ft_swap_a(a, b, 1);
	}
	else
	{
		ft_rotate_b(a, b, 1);
		ft_swap_b(a, b, 1);
	}
}
static void	ft_reverse_rotate_swap(t_pslist *list, t_pslist *a, t_pslist *b)
{
	if (list->name == 'a')
	{
		ft_reverse_rotate_a(a, b, 1);
		ft_swap_a(a, b, 1);
	}
	else
	{
		ft_reverse_rotate_b(a, b, 1);
		ft_swap_b(a, b, 1);
	}
}
void ft_sortthree(t_pslist *list, t_pslist *a, t_pslist *b)
{
	if (list->head->index == 2 && list->head->next->index == 1)
		ft_swaprotate(list, a, b);
	else if (list->head->index == 0 && list->head->next->index == 2)
		ft_reverse_rotate_swap(list, a, b);
	else if (list->head->index > list->head->next->index)
	{
		if (list->name == 'a')
			ft_swap_a(a, b, 1);
		else
			ft_swap_b(a, b, 1);
	}
	else if (list->head->index > list->tail->index)
	{
	if (list->name == 'a')
		ft_rotate_a(a, b, 1);
	else
		ft_rotate_b(a, b, 1);
	}
}
