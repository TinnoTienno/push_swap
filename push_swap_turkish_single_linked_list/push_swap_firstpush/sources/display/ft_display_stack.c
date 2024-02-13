/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:50:38 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 14:58:12 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_forward_stack(t_pslist *list)
{
	t_pselement *element;

	if (!list)
	{
		ft_printf_fd(1, "Error : No list\n");
		return ;
	}
	ft_printf_fd(1, "----LECTURE AVANT----\n---> nb de valeurs : %d\n", list->total);
	if (!list->head)
	{
		ft_printf_fd(1, "No data\n");
		return;
	}
	element = list->head;
	ft_printf_fd(1, "|-> VALUE : %d  || NBMOVEA : %d || NBMOVEB : %d\n", element->value, element->nbmovea);
	element = element->next;
	while (element != a->head)
	{
		ft_printf_fd(1, "|-> VALUE : %d  || NBMOVEA : %d || NBMOVEB : %d\n", element->value, element->nbmovea);
		element = element->next;
	}
}

// void	ft_display_forward_stack_both(t_pslist *a, t_pslist *b)
// {
// 	t_pselement	*elea;
// 	t_pselement	*eleb;

// 	if (!a && !b)
// 		ft_printf_fd(1, "error : No list");
// 	if (!a)
// 		ft_display_forward_stack(b);
// 	if (!b)
// 		ft_display_forward_stack(a);
// 	ft_printf_fd(1, "---- LECTURE AVANT ----\n");
// 	ft_printf_fd(1, "List A %2d | List B %2d \n", a->total, b->total);
// 	if (!a->head)
// 	{
// 		eleb = b->head;
// 		while (eleb)
// 		{
// 			ft_printf_fd(1, "         |  --%-4d--\n", eleb->value);
// 			eleb = eleb->next;
// 		}
// 	}
// 	else if(!b->head)
// 	{
// 		elea = a->head;
// 		while (elea)
// 		{
// 			ft_printf_fd(1, "--%4d--  |\n");
// 			elea = elea->next;
// 		}
// 	}
// 	else
// 	{
// 		elea = a->head;
// 		eleb = b->head;
// 		while (eleb && elea)
// 		{
// 			ft_printf_fd(1, "--%4d--  |  --%-4d--\n", elea->value, eleb->value);
// 			elea = elea->next;
// 			eleb = eleb->next;
// 		}
// 		while (elea)
// 		{
// 			ft_printf_fd(1, "--%4d--  |\n");
// 			elea = elea->next;
// 		}
// 		while (eleb)
// 		{
// 			ft_printf_fd(1, "         |  --%-4d--\n", eleb->value);
// 			eleb = eleb->next;
// 		}
// 	}
// 	ft_printf_fd(1, "\n\n");
// }