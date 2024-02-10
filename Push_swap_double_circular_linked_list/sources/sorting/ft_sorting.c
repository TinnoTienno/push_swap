/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:59:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 18:16:26 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorting(t_pslist *a)
{
	t_pslist	*b;

	(void) a;
	b = ft_initlist('b');
	ft_push_b(a, b, 1);
	ft_push_b(a, b, 1);
	ft_freelist_ps(b);
}