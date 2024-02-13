/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:28:56 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 12:26:37 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_reini(t_pselement *elem)
{
	elem->nbmovea = 1000;
	elem->nbmoveb = 1000;
	elem->nbmoveboth = 1000;
}
int	ft_nbmoveb(int value, t_pslist *b)
{
	int	count;

	t_pselement *elem;
	int med;
	
	if (b->total % 2 == 0)
		med = b->total / 2 - 1;
	else
		med = b->total / 2;
	elem = b->head;
	count = 0;
	if (value > b->max || value < b->min)
	{
		while (elem->value != b->max)
		{
			count++;
			elem = elem->next;
		}
	}
	else
	{
		while (!(elem->value < value && elem->previous->value > value))
		{
			count++;
			elem = elem->next;
		}
	}
	if (count > med)
		count = -(b->total - count);
	return (count);
}


void	ft_nbmove(t_pslist *a, t_pslist *b)
{
	t_pselement *elem;
	int			nbmovea;
	int			med;
	
	a->head->nbmovea = 0;
	a->head->nbmoveb = ft_nbmoveb(a->head->value, b);
	nbmovea = 0;
	if (a->total %2 == 0)
		med = a->total / 2 -1;
	else
		med = a->total / 2;
	if (!a->head->next)
		return ;
	elem = a->head->next;
	while (elem != a->head)
	{
		ft_reini(elem);
		nbmovea++;
		if (nbmovea > med)
			elem->nbmovea = -(a->total -(nbmovea));
		else
			elem->nbmovea = nbmovea;
		elem->nbmoveb = ft_nbmoveb(elem->value, b);
		elem = elem->next;
	}
}
