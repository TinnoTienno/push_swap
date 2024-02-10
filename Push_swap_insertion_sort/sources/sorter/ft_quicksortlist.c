/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksortlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:25:08 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/24 18:22:24 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"
#include "sorter.h"

t_pselement	*ft_lastnode(t_pslist *list, t_psstruct *s_ps, int wall)
{
	t_pselement	*current;
	
	current = list->head;
	if (wall == s_ps->q3)
	{
		while (current->value < wall)
			current = current->next;
	}
	else
	{
		while (current->value > wall)
			current = current->next;
	}
	return (current);
}
static	t_pselement	*ft_partition(t_pselement *head, t_pselement *tail)
{
	t_pselement	*pivot;
	t_pselement	*current;
	t_pselement	*previous;

	pivot  = head;
	current = head->next;
	previous = head;
	return (head);
}
void	ft_solvesort(t_pselement *head, t_pselement *tail)
{
	t_pselement *pivot;
	
	if (head == NULL || tail == NULL || head == tail)
		return ;
	pivot = ft_partition(head, tail);
	ft_solvesort(head, pivot);
	ft_solvesort(pivot->next, tail);
}

void	ft_quicksortlist(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	t_pselement	*lastnodea;
	t_pselement	*lastnodeb;
	
	lastnodea = ft_lastnode(a, s_ps, s_ps->q3);
	lastnodeb = ft_lastnode(b, s_ps, s_ps->q1);
	
	ft_solvesort(a->head, lastnodea);
}