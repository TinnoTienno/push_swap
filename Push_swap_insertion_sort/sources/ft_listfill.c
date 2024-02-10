/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:48 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/25 18:24:57 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist *ft_listfill(t_pslist *list, char **tab, int nb)
{
	while (nb >= 0)
	{
		if (!ft_newelement(list, ft_atoi(tab[nb])))
			return (ft_freelistps(list), NULL);
		if (list->total == 1)
			list->tail = list->head;
		nb--;
	}
	return (list);
}