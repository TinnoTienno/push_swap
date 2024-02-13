/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushing_to_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:26:35 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:33:33 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pushing_to_a(t_pslist *a, t_pslist *b)
{	
	while (b->total != 0)
	{
		b->head->nbmovea = ft_nbmovetoa(a, b->head->value);
		ft_pushtoa(a, b);
	}
}