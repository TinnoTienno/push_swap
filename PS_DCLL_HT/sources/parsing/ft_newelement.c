/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newelement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:18:31 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:22 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pselement	*ft_newelement(int value, t_pslist *a, t_psstruct *solved)
{
	t_pselement	*new;
	int			i;

	new = malloc (sizeof(t_pselement));
	if (!new)
		return (NULL);
	i = 0;
	while (value != solved->tabint[i])
		i++;
	new->index = i;
	new->nbmovea = 0;
	new->nbmoveb = 0;
	if (!a->head)
		new->next = new;
	if (!a->head)
		new->previous = new;
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
