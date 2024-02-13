/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmovetofirststack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:38:19 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:52:11 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_nbmovetofirststack(t_pselement *current, t_pslist *a)
{
	t_pselement *elem;
	int			count;
	int			med;

	elem = a->head;
	count = 0;
	if (a->total % 2 == 0)
		med = a->total / 2 - 1;
	else
		med = a->total / 2;
	while (elem != current)
	{
		count++;
		elem = elem->next;
	}
	if (count > med)
		count = -(count - med);
	return (count);
}