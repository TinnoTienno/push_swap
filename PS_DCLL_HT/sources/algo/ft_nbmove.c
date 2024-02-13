/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:28:56 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:39:38 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_reini(t_pselement *elem)
{
	elem->nbmovea = 0;
	elem->nbmoveb = 0;
	elem->nbmoveboth = 0;
}

static int	ft_nbmovea2(int value, t_pslist *a)
{
	t_pselement	*elem;
	int			count;

	elem = a->head;
	count = 0;
	if (value > a->max || value < a->min)
	{
		while (elem->previous->index != a->max)
		{
			count++;
			elem = elem->next;
		}
	}
	else
	{
		while (!(elem->index > value && elem->previous->index < value))
		{
			count++;
			elem = elem->next;
		}
	}
	return (count);
}

int	ft_nbmovea(int value, t_pslist *a)
{
	int	count;
	int	med;

	count = 0;
	if (a->total % 2 == 0)
		med = a->total / 2 - 1;
	else
		med = a->total / 2;
	count = ft_nbmovea2(value, a);
	if (count > med)
		count = -(a->total - count);
	return (count);
}

void	ft_nbmove(t_pslist *a, t_pslist *b)
{
	t_pselement	*elem;
	int			nbmoveb;
	int			med;

	ft_reini(b->head);
	b->head->nbmovea = ft_nbmovea(b->head->index, a);
	nbmoveb = 0;
	if (b->total % 2 == 0)
		med = b->total / 2 - 1;
	else
		med = b->total / 2;
	if (!b->head->next)
		return ;
	elem = b->head->next;
	while (elem != b->head)
	{
		ft_reini(elem);
		nbmoveb++;
		if (nbmoveb > med)
			elem->nbmoveb = -(b->total - nbmoveb);
		else
			elem->nbmoveb = nbmoveb;
		elem->nbmovea = ft_nbmovea(elem->index, a);
		elem = elem->next;
	}
}
