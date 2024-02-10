/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:07:11 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:40:37 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ft_sorter(t_pslist	*a, t_psstruct *data)
{
	t_pslist	*b;

	b = NULL;
	if (a->total == 2)
		return (ft_swap_a(a, b, 1));
	b = ft_sort_b(a, data);
	ft_freelistps(b);
}