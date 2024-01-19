/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:27:20 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:39:54 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_freelistPS(t_PSlist *list)
{
	t_PSelement *tmp;
	
	while (list->first)
	{
		tmp = list->first->next;
		free (list->first);
		list->first = tmp;
	}
	free(list);
}