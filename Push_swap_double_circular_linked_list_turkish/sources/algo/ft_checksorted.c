/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:49 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 18:58:55 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_pslist *a)
{
	t_pselement *elem;

	elem = a->head->next;
	while (elem != a->head)
	{
		if (elem->previous->value > elem->value)
			return (0);
		elem = elem->next;
	}
	return (1);
}