/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:27:20 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 14:48:32 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_freelistps(t_pslist *list)
{
	t_pselement *tmp;
	
	if (!list)
		return ;
	while (list->head)
	{
		tmp = list->head->next;
		free (list->head);
		list->head = tmp;
	}
	free(list);
}