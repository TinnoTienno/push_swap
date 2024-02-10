/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:29 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 16:34:08 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorter.h"
#include "commands.h"

void	ft_secondrun(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	while (a->total >= b->total/ 3  + 2)
	{
		if (a->head->value < s_ps->tabint[s_ps->total / 2 + s_ps->total / 4])
			ft_push_b(a, b);
		else
			ft_rotate_a(a, b);
	}
	while (b->head->value >= s_ps->tabint[s_ps->total / 2])
		ft_push_a(a,b);
}

void	ft_firstrun(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	while (a->total >= b->total + 2)
	{
		if (a->head->value < s_ps->tabint[s_ps->total / 2])
		{
			ft_push_b(a, b);
			if (b->head->value <= s_ps->tabint[s_ps->total / 4])
			{
				if (a->head->value >= s_ps->tabint[s_ps->total / 2])
					ft_rotate_both(a,b);
				else
					ft_rotate_b(a,b);
			}
		}
		else
			ft_rotate_a(a, b);
	}
	while (b->head->value <= s_ps->tabint[s_ps->total / 4])
		ft_rotate_b(a,b);
	while (b->tail->value > s_ps->tabint[s_ps->total / 4])
	 	ft_reverse_rotate_b(a,b);
	while (b->head->value <= s_ps->tabint[s_ps->total / 4])
		ft_rotate_b(a,b);
}

void	ft_sorter(t_psstruct *s_ps, char **tab, int size)
{
	t_pslist	*a;
	t_pslist	*b;

	a = NULL;
	b = NULL;
	a = ft_listinit('a');
	if (!a)
		return (free (s_ps));
	b = ft_listinit('b');
	if (!b)
		return (free (s_ps), free (a));
	if (!ft_listfill(a, tab, size - 1))
		return (free (s_ps), free (b));
	ft_firstrun(a, b, s_ps);
	ft_secondrun(a, b, s_ps);
	//ft_insertsort(a, b, s_ps);
	// ft_pushlist(a, b, s_ps);
	// // ft_display_struct(s_ps);
	// ft_display_forward_stack(b);
	ft_freelistps (a);
	ft_freelistps (b);
	free (s_ps->tabint);
	free (s_ps);
}