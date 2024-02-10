/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:51:51 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:34:42 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_rotate(t_pslist *list)
{
	list->head = list->head->next;
}

int	ft_rotate_a(t_pslist *a, t_pslist *b, int p)
{
	(void) b;

	ft_rotate(a);
	if (p)
		ft_printf("ra\n");
	return 1;
}

int	ft_rotate_b(t_pslist *a, t_pslist *b, int p)
{
	(void) a;

	ft_rotate(b);
	if (p)
		ft_printf("rb\n");
	return 1;
}

int	ft_rotate_both(t_pslist *a, t_pslist *b, int p)
{
	ft_rotate(a);
	ft_rotate(b);
	if (p)
		ft_printf("rr\n");
	return 1;
}