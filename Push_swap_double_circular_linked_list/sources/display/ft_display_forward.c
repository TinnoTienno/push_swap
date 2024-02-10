/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_forward.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:27:50 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 18:05:35 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_forward_list(t_pslist *list)
{
	t_pselement 	*elem;
	
	ft_printf("---PRINT FORWARD---\n");
	if (!list)
		return (ft_printf("/!\\ WARNING /!\\ \n - EMPTY LIST -\n"), (void) 1);
	if (!list->head)
		return (ft_printf("/!\\ WARNING /!\\ \n - EMPTY LIST -\n"), (void) 1);
	ft_printf("-Liste %c, effectif total : %d-\n", list->name, list->total);
	ft_printf("|--> valeur :%3d ||--> nbmovea :%3d  ||--> nbmoveb :%3d\n", list->head->value, list->head->nbmovea, list->head->nbmoveb);
	elem = list->head->next;
	while (elem != list->head)
	{
		ft_printf("|--> valeur :%3d ||--> nbmovea :%3d  ||--> nbmoveb :%3d\n", elem->value, elem->nbmovea, elem->nbmoveb);
		elem = elem->next;
	}
	ft_printf("---END-OF-LIST---\n");
}