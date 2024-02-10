/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newelement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:18:31 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 16:28:42 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pselement	*ft_newelement(int value, t_pslist *a)
{
	t_pselement *new;

	new = malloc (sizeof(t_pselement));
	if (!new)
		return NULL;
	new->value = value;
	new->nbmovea = 0;
	new->nbmoveb = 0;
	if (!a->head)
	{
		new->next = new;
		new->previous = new;
	}
	else
	{
		new->next = a->head;
		new->previous = a->head->previous;
		a->head->previous = new;
	}
	a->head = new;
	new->previous->next = new;
	return (new);
}
