/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushing_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:51:52 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/09 12:39:41 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_pselement	*ft_mark(t_pslist *a)
{
	t_pselement *elem;
	t_pselement *mark;

	elem = a->head->next;
	mark = a->head;
	while (elem != a->head)
	{
		if (mark->nbmoveboth > elem->nbmoveboth)
			mark = elem;
		elem = elem->next;
	}
	return mark;
}
void	ft_pushing_to_b(t_pslist *a, t_pslist *b)
{
	t_pselement	*mark;

	mark = ft_mark(a);
	if (mark->nbmovea != 0 && mark->nbmoveb == 0)
	{
		ft_commandsa(a, b, mark->nbmovea);
	}
	else if (mark->nbmoveb != 0 && mark->nbmovea == 0)
	{
		ft_commandsb(b, a, mark->nbmoveb);
	}
	else if (mark->nbmovea > 0 && mark->nbmoveb > 0)
	{
		ft_commandsrboth(a, b, mark->nbmovea, mark->nbmoveb);
	}
	else if (mark->nbmovea < 0 && mark->nbmoveb < 0)
	{
		ft_commandsrrboth(a, b, mark->nbmovea, mark->nbmoveb);
	}
	else
	{
		ft_commandsa(a, b, mark->nbmovea);
		ft_commandsb(b, a, mark->nbmoveb);
	}
	ft_push_b(a, b, 1);
}