/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksorttab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:15:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:23:59 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_quicksort2(int wall, int current, int *tab)
{
	int	tmp;

	if (wall != current)
	{
		tmp = tab[current];
		tab[current] = tab[wall];
		tab[wall] = tmp;
	}
	wall++;
	return (wall);
}

void	ft_quicksorttab(int *tab, int size)
{
	int	pivot;
	int	current;
	int	wall;

	if (size < 2)
		return ;
	current = 1;
	pivot = tab[size - 1];
	wall = 0;
	current = 0;
	while (current < size)
	{
		if (tab[current] <= pivot)
			wall = ft_quicksort2(wall, current, tab);
		current++;
	}
	ft_quicksorttab(tab, wall -1);
	ft_quicksorttab(tab + wall -1, size - wall + 1);
}
