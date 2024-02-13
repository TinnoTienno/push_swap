/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:51:51 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:44:22 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rotate(t_pslist *list)
{
	list->head = list->head->next;
}

void	ft_rotate_a(t_pslist *a, t_pslist *b, int p)
{
	(void)b;
	ft_rotate(a);
	if (p)
		ft_printf("ra\n");
}

void	ft_rotate_b(t_pslist *a, t_pslist *b, int p)
{
	(void)a;
	ft_rotate(b);
	if (p)
		ft_printf("rb\n");
}

void	ft_rotate_both(t_pslist *a, t_pslist *b, int p)
{
	ft_rotate(a);
	ft_rotate(b);
	if (p)
		ft_printf("rr\n");
}
