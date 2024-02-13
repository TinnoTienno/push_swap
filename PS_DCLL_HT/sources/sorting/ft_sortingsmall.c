/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortingsmall.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:13:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:36:00 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sortingsmall(t_pslist *a, t_pslist *b)
{
	if (a->total == 2)
		return (ft_swap_a(a, b, 1), 1);
	if (a->total == 3)
		return (ft_sort3(a, b), 1);
	if (a->total == 4)
		return (ft_sort4(a, b), 1);
	return (0);
}
