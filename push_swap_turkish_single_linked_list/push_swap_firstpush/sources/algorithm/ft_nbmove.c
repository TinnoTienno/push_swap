/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:05:19 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 14:54:32 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbmoveoverall(int a, int b)
{
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	if ((a > 0 && b > 0) || (a < 0 && b < 0))
	{
		if (a > b)
			return a;
		else
			return b;
	}
	if (a < 0)
		return (b + - a);
	else
		return (a + - b);
}

void	ft_nbmove(t_pslist *a, t_pslist *b)
{
	t_pselement *elem;

	ft_display_forward_stack(a);
	ft_display_forward_stack(b);
	elem = a->head;
	while (elem)
	{
		elem->nbmovea = ft_nbmovetofirststack(elem, a);
		elem->nbmoveb = ft_nbmovetosecondstack(elem, b);
		elem = elem->next;
	}
	ft_display_forward_stack(a);
}