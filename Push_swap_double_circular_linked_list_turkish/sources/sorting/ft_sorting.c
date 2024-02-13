/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:59:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 13:14:52 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_pslist *a)
{
	t_pslist	*b;

	b = ft_initlist('b');
	if (!b)
		return ;
	if (a->total == 2)
		return (ft_freelist_ps(b), ft_swap_a(a, b, 1));
	if (a->total == 3)
		return (ft_freelist_ps(b), ft_sort3(a, b));
	if (a->total == 4)
		return (ft_sort4(a, b));
	ft_push_b(a, b, 1);
	ft_push_b(a, b, 1);
	while (a->total >= 4)
	{
		if (ft_checksorted(a))
			break;
		ft_nbmove(a, b);
		ft_nbmovecumul(a);
		ft_pushing_to_b(a , b);\
	}
	if (a->total == 3)
		ft_sort3(a, b);
	a->min = a->head->value;
	a->max = a->head->previous->value;
	ft_pushing_to_q(a , b);
	ft_lookformin(a, b);
	ft_freelist_ps(b);
}
