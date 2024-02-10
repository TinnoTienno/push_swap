/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:48:45 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:07:11 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int ft_checksorted(t_pslist *a, t_pslist *b)
{
	t_pselement	*elem;
	
	if (b->head)
		return (ft_printf("KO\n"));
	elem = a->head->next;
	while (elem != a->head)
	{
		if (elem->value < elem->next->value)
			return (ft_printf("KO\n"));
		elem = elem->next;
	}
	return (ft_printf("OK\n"));

}