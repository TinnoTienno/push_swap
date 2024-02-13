/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:26:29 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 14:59:34 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pselement	*ft_new_element(t_pslist *a, int nb)
{
	t_pselement	*elem;

	elem = malloc(sizeof(t_pselement));
	if (!elem)
		return NULL;
	elem->value = nb;
	if (a->head)
		elem->next = a->head;
	else
		elem->next = elem;
	elem->nbmovea = 0;
	elem->nbmoveb = 0;
	a->head = elem;
	return (elem);
}