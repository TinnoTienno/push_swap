/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:26:03 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 18:06:49 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_array(int *array, int size)
{
	int i;

	i = 0;
	ft_printf("==== ARRAY ==== \n");
	while (i < size)
	{
		ft_printf("%d\n", array[i]);
		i++;
	}
	ft_printf("= END OF ARRAY =\n");
}