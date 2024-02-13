/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:03:21 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:37 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_initlist(char c)
{
	t_pslist	*list;

	list = malloc(sizeof(t_pslist));
	if (!list)
		return (NULL);
	list->head = NULL;
	list->name = c;
	list->total = 0;
	list->min = 2147483647;
	list->max = -2147483648;
	return (list);
}
