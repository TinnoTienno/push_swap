/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:57:17 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:58:56 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort4(t_pslist *a, t_pslist *b)
{
	ft_push_b(a, b, 1);
	ft_sort3(a, b);
	a->min = a->head->value;
	a->max = a->head->previous->value;
	ft_pushing_to_a(a, b);
	ft_lookformin(a, b);
	ft_freelist_ps(b);
}