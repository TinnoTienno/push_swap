/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:50:38 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 16:48:09 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_forward_stack(t_pslist *list)
{
	t_pselement *element;

	if (!list)
	{
		ft_printf("Error : No list\n");
		return ;
	}
	ft_printf("list %c (total : %d): LECTURE AVANT\n", list->name, list->total);
	if (!list->head)
	{
		ft_printf("No data\n");
		return;
	}
	ft_printf("Head : %d | Tail : %d\n", list->head->value, list->tail->value);
	element = list->head;
	while (element)
	{
		ft_printf("%d\n", element->value);
		element = element->next;
	}
}

void	ft_display_backward_stack(t_pslist *list)
{
	t_pselement	*element;
	if (!list)
	{
		ft_printf("error : No list\n");
		return ;
	}
	ft_printf("list %c (total : %d): LECTURE ARRIERE\n", list->name, list->total);
	if (!list->tail)
	{
		ft_printf("No data\n");
		return ;
	}
	ft_printf("Head : %d | Tail : %d\n", list->head->value, list->tail->value);
	element = list->tail;
	while (element)
	{
		ft_printf("%d\n", element->value);
		element = element->previous;
	}
}

void	ft_display_forward_stack_both(t_pslist *a, t_pslist *b)
{
	t_pselement	*elea;
	t_pselement	*eleb;

	if (!a && !b)
		ft_printf("error : No list");
	if (!a)
		ft_display_forward_stack(b);
	if (!b)
		ft_display_forward_stack(a);
	ft_printf("---- LECTURE AVANT ----\n");
	ft_printf("List A %2d | List B %2d \n", a->total, b->total);
	if (!a->head)
	{
		eleb = b->head;
		while (eleb)
		{
			ft_printf("         |  --%-4d--\n", eleb->value);
			eleb = eleb->next;
		}
	}
	else if(!b->head)
	{
		elea = a->head;
		while (elea)
		{
			ft_printf("--%4d--  |\n");
			elea = elea->next;
		}
	}
	else
	{
		elea = a->head;
		eleb = b->head;
		while (eleb && elea)
		{
			ft_printf("--%4d--  |  --%-4d--\n", elea->value, eleb->value);
			elea = elea->next;
			eleb = eleb->next;
		}
		while (elea)
		{
			ft_printf("--%4d--  |\n");
			elea = elea->next;
		}
		while (eleb)
		{
			ft_printf("         |  --%-4d--\n", eleb->value);
			eleb = eleb->next;
		}
	}
	printf("\n\n");
}