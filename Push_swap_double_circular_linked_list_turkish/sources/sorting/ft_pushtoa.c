/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushtoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:45:36 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/09 15:22:12 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushtoa(t_pslist *a, t_pslist *b)
{
	while (b->head->nbmovea > 0)
	{
		ft_rotate_a(a, b, 1);
		b->head->nbmovea--;
	}
	while (b->head->nbmovea < 0)
	{
		ft_reverse_rotate_a(a, b, 1);
		b->head->nbmovea++;
	}
	ft_push_a(a, b, 1);
}