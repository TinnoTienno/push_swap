/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:50:38 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:57:41 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_stack(t_PSlist *list)
{
	t_PSelement *element;

	if (!list)
	{
		ft_printf("Error : No list\n");
		return ;
	}
	ft_printf("list %c (total : %d):\n", list->name, list->total);
	if (!list->first)
	{
		ft_printf("No data\n");
		return;
	}
	element = list->first;
	while (element)
	{
		ft_printf("%d\n", element->value);
		element = element->next;
	}
}