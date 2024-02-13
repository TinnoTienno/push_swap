/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbmovecumul.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:17:12 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:19:41 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_absolu(int nb)
{
	if (nb < 0)
		nb = -nb;
	return (nb);
}

static void	ft_nbmovecumulcalc(t_pselement *current)
{
	if (current->nbmovea == 0 || current->nbmoveb == 0)
		current->nbmoveboth = ft_absolu(current->nbmoveb) \
		+ ft_absolu(current->nbmovea);
	else if (current->nbmovea > 0 && current->nbmoveb > 0)
	{
		if (current->nbmovea < current->nbmoveb)
			current->nbmoveboth = current->nbmoveb;
		else
			current->nbmoveboth = current->nbmovea;
	}
	else if (current->nbmovea < 0 && current->nbmoveb < 0)
	{
		if (current->nbmovea > current->nbmoveb)
			current->nbmoveboth = -current->nbmoveb;
		else
			current->nbmoveboth = -current->nbmovea;
	}
	else
		current->nbmoveboth = ft_absolu(current->nbmovea) \
			+ ft_absolu(current->nbmoveb);
}

void	ft_nbmovecumul(t_pslist *list)
{
	t_pselement	*elem;

	elem = list->head->next;
	ft_nbmovecumulcalc(list->head);
	while (elem != list->head)
	{
		ft_nbmovecumulcalc(elem);
		elem = elem->next;
	}
}
