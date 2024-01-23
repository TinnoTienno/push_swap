/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:24:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 18:27:00 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_check_stack(t_pslist *list)
{
	t_pselement	*current;
	
	current = list->head;
	while (current)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}