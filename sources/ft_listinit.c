/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:07:55 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:26:25 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_PSlist *ft_listinit(int c)
{
	t_PSlist *list;
	
	list = malloc(sizeof(t_PSlist));
	if (!list)
		return (NULL);
	list->first = NULL;
	list->name = c;
	list->total = 0;
	return (list);
}