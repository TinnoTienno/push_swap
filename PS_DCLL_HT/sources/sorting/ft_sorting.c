/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:59:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:26:24 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_pslist *a, t_pslist *b)
{
	while (b->total > 0)
	{
		ft_nbmove(a, b);
		ft_nbmovecumul(b);
		ft_pushing_to_a(a, b);
	}
	ft_lookformin(a, b);
	ft_display_forward_list(a);
}
