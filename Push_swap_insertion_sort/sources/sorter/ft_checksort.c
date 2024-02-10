/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:23:12 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 18:40:07 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checksorta(t_pslist *a)
{
	t_pselement *current;
	
	current = a->head;
	if (current->next->value < current->value)
	{
		while (current->next)
		{
			if (current->next->value > current->value)
				return (0);
			current = current->next;
		}
	}
	else
	{
		while (current->next)
		{
			if (current->next->value < current->value)
				return (0);
			current = current->next;
		}
	}
	return (1);
}

int	ft_checksortb(t_pslist *b)
{
		t_pselement *current;
	
	current = b->head;
	if (current->next->value > current->value)
	{
		while (current->next)
		{
			if (current->next->value < current->value)
				return (0);
			current = current->next;
		}
	}
	else
	{
		while (current->next)
		{
			if (current->next->value > current->value)
				return (0);
			current = current->next;
		}
	}
	return (1);
}