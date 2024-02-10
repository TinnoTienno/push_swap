/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmovetosecondstack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:53:28 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 15:06:21 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbmovetosecondstack(t_pselement *current, t_pslist *b)
{
	t_pselement *elem;
	int			count;
	int			med;
	int val 
	
	elem = b->head;
	count = 1;
	if (b->total % 2 == 0)
		med = b->total / 2 - 1;
	else
		med = b->total / 2;
	
	if (count > med)
		count = -(count - med);
	return (count);
}