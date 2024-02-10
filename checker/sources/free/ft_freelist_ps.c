/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelist_ps.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:40:46 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:16:08 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_freelist_ps(t_pslist *list)
{
	t_pselement	*elem;
	void		*next;
	
	if (!list)
		return;
	if (!list->head)
		return (free(list), (void) 1);
	if (!list->head->next)
		return (free(list->head), free(list), (void) 1);
	elem = list->head->next;
	while (elem != list->head)
	{
		next = elem->next;
		free (elem);
		elem = next;
	}
	free (list->head);
	free (list);
}