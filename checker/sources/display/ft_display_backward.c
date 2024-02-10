/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_backward.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:56:59 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:18:00 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_display_backward_list(t_pslist *list)
{
	t_pselement 	*elem;
	
	ft_printf("---PRINT BACKWARD---\n");
	if (!list)
		return (ft_printf("/!\\ WARNING /!\\ \n - EMPTY LIST -\n"), (void) 1);
	if (!list->head)
		return (ft_printf("/!\\ WARNING /!\\ \n - EMPTY LIST -\n"), (void) 1);
	ft_printf("-Liste %c, effectif total : %d-\n", list->name, list->total);
	elem = list->head->previous;
	while (elem != list->head)
	{
		ft_printf("|--> valeur :%3d ||--> nbmovea :%3d  ||--> nbmoveb :%3d\n", elem->value, elem->nbmovea, elem->nbmoveb);
		elem = elem->previous;
	}
	ft_printf("|--> valeur :%3d ||--> nbmovea :%3d  ||--> nbmoveb :%3d\n", list->head->value, list->head->nbmovea, list->head->nbmoveb);
	ft_printf("---END-OF-LIST---\n");
}