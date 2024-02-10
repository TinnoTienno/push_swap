/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:59:29 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 15:28:58 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorter.h"

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
	ft_quicksortlist(a, b, s_ps);
	ft_freelistps (a);
	ft_freelistps (b);
	free (s_ps);
}