/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newelement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:05:54 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 16:14:25 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist *ft_newelement(t_pslist *list, int nb)
{
	t_pselement *new_element;
	
	new_element = malloc (sizeof(t_pselement));
	if (!new_element)
		return (ft_freelistps(list), NULL);
	new_element->value = nb;
	new_element->previous = NULL;
	if (list->head)
		list->head->previous = new_element;
	new_element->next = list->head;
	list->head = new_element;
	list->total++;
	return (list);
}