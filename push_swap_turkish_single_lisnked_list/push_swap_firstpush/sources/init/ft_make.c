/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 10:46:01 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 16:02:32 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_make(char **tab, int size)
{
	t_pslist	*a;

	a = malloc (sizeof(t_pslist));
	if (!a)
		return NULL;
	a->total = 0;
	a->head = NULL;
	while (--size >= 0)
	{
		if (ft_error_ps(tab[size], a))
			return (ft_freelistps(a), NULL);
		if (!ft_new_element(a, ft_atoi(tab[size])))
			return (ft_freelistps(a), NULL);
		a->total++;
	}
	ft_display_forward_stack(a);
	return (a);
}
