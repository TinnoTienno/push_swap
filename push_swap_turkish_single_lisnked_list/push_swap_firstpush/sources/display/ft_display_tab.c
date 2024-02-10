/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:50:37 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 14:35:44 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_display_tab(int *tab, int size)
{
	int i;

	i = 0;
	ft_printf ("----IMPRESSION TAB----\n");
	while (i < size)
	{
		ft_printf("%d\n", tab[i]);
		i++;
	}
}