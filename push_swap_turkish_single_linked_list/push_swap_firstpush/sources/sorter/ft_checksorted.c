/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:00:37 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:05:57 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_pslist *a)
{
	t_pselement *elem;

	elem = a->head;
	while (elem->next)
	{
		if (elem->value > elem->next->value)
			return 0;
		elem = elem->next;
	}
	return (1);
}