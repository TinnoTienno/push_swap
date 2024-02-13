/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pslist.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 15:20:38 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:20:39 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pslist(char **tab, t_psstruct *solved)
{
	t_pslist	*a;
	t_pslist	*b;

	if (solved->total > 1)
		a = ft_parsinglist(solved, tab);
	else
		a = ft_parsingliststr(solved, tab[0]);
	if (!a)
		return ;
	b = ft_initlist('b');
	if (!b)
		return (ft_freelist_ps(a));
	if (ft_sortingsmall(a, b))
		return (ft_freelist_ps(a), ft_freelist_ps (b));
	ft_firstpush(a, b, solved);
	ft_sorting(a, b);
	ft_freelist_ps(b);
	ft_freelist_ps(a);
}
