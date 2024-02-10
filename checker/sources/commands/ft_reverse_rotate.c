/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:07:45 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:34:12 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_reverse_rotate(t_pslist *list)
{
	list->head = list->head->previous;
}

int	ft_reverse_rotate_a(t_pslist *a, t_pslist *b, int p)
{
	(void) b;

	ft_reverse_rotate(a);
	if (p)
		ft_printf("rra\n");
	return 1;
}

int	ft_reverse_rotate_b(t_pslist *a, t_pslist *b, int p)
{
	(void) a;

	ft_reverse_rotate(b);
	if (p)
		ft_printf("rrb\n");
	return 1;
}

int	ft_reverse_rotate_both(t_pslist *a, t_pslist *b, int p)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (p)
		ft_printf("rrr\n");
	return 1;
}