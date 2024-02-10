/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:04:05 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 17:56:02 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *ft_arrayinit(int size, char **argv, t_PSstruct *stru)
{
	int *array;
	int i;
	int j;
	
	i = 0;
	array = malloc (sizeof(int) * size);
	if (!array)
		return (NULL);
	while (argv[i])
	{
		if (ft_error(argv[i]) == 1)
			return (free (array), ft_printf("error\n"), NULL);
		array[i] = ft_atoi(argv[i]);
		if (array[i] > stru->max)
			stru->max = array[i];
		if (array[i] < stru->min)
			stru->min = array[i];
		j = -1;
		while (++j < i)
		{
			if (array[i] == array[j])
				return (free (array), ft_printf("error\n"), NULL);
		}
		i++;
	}
	stru->sizea = size;
	return (array);
}
