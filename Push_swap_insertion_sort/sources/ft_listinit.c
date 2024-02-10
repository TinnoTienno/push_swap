/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:07:55 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 11:51:53 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist *ft_listinit(char c)
{
	t_pslist *list;
	
	list = malloc(sizeof(t_pslist));
	if (!list)
		return (NULL);
	list->head = NULL;
	list->name = c;
	list->total = 0;
	return (list);
}