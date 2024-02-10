/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:24:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/25 15:46:02 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	ft_check_stack(t_pslist *list)
{
	t_pselement	*current;
	int			count;
	
	current = list->head;
	count = 0;
	while (current)
	{
		if (current->value > current->next->value)
		{
			if (count)
				return (0);
			count++;
		}
		current = current->next;
	}
	return (1);
}