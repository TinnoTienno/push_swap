/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:20:49 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:40:07 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorted(t_pslist *a)
{
	t_pselement	*elem;

	if (!a)
		return (0);
	if (!a->head)
		return (0);
	if (!a->head->next)
		return (1);
	elem = a->head->next;
	while (elem != a->head)
	{
		if (elem->previous->index > elem->index)
			return (0);
		elem = elem->next;
	}
	return (1);
}
