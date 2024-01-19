/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newelement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:05:54 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:30:21 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_PSlist *ft_newelement(t_PSlist *list, int nb)
{
	t_PSelement *new_element;
	
	new_element = malloc (sizeof(t_PSelement));
	if (!new_element)
		return (ft_freelistPS(list), NULL);
	new_element->value = nb;
	new_element->index = 0;
	new_element->next = list->first;
	list->first = new_element;
	list->total++;
	return (list);
}