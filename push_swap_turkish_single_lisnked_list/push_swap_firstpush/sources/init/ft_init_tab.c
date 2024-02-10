/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:20:38 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 18:25:17 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_init_tab(char **tab, int size)
{
	int	*tabint;
	int i;
	
	tabint = ft_calloc(size, sizeof(int));
	if (!tabint)
		return NULL;
	i = - 1;
	while (++i)
		tabint[i] = ft_atoi(tab[i]);
	return (tabint);
}