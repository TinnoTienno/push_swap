/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:10:21 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:49:48 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_sort_b(t_pslist *a, t_psstruct *data)
{
	t_pslist	*b;

	(void) data;
	b = malloc(sizeof(t_pslist));
	b->total = 0;
	b->head = NULL;
	ft_push_b(a, b, 1);
	ft_push_b(a, b, 1);
	ft_nbmove(a, b);
	return b;
}