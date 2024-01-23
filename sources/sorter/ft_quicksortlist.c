/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksortlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:25:08 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 18:44:36 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"
#include "sorter.h"

void	ft_firstrun(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	while (a->total > b->total + 1)
	{
		if (a->head->value >= s_ps->med)
		{
			if (a->head->value >= s_ps->q3)
			{
				ft_push_b(a, b);
				break ;
			}
			ft_push_b(a, b);
				printf ("yo\n");
			ft_rotate_b(a, b);
		}
		else
			ft_rotate_a(a, b);
	}
}
void	ft_quicksortlist(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	ft_display_stack(a);
	ft_display_stack(b);
	ft_firstrun(a, b, s_ps);
	ft_display_stack(a);
	ft_display_stack(b);
}