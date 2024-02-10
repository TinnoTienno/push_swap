/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelistps.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:46:31 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 15:39:54 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freelistps(t_pslist *list)
{
	void *next;
	t_pselement	*current;
	
	if (!list)
		return ;
	if (!list->head)
		return (free(list));
	current = list->head;
	while (current)
	{
		next = current->next;
		free (current);
		current = next;
	}
	free (list);
}