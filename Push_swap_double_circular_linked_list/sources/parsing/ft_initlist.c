/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:03:21 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 17:06:17 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_initlist(char c)
{
	t_pslist	*list;

	list = malloc (sizeof(t_pslist));
	if (!list)
		return (NULL);
	list->head = NULL;
	list->name = c;
	list->total = 0;
	return (list);
}