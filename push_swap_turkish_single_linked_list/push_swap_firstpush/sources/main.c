/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:16 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 20:51:19 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_pslist	*a;
	t_psstruct	*data;
	
	if (argc - 1 <= 1)
		return (0);
	a = ft_make(&argv[1], argc - 1);
	if (!a)
		return 1;
	data = malloc (sizeof(t_psstruct));
	if (!data)
		return (ft_freelistps(a), 0);
	data->size = argc - 1;
	data->tab = ft_init_tab(&argv[1], argc - 1);
	if (!data->tab)
		return (ft_freelistps(a), free (data), 0);
	ft_quicksorttab(data->tab, data->size);
	if (ft_checksorted(a))
		return (ft_freelistps(a), ft_freestruct(data), 0);
	ft_sorter(a, data);
	ft_freelistps(a);
	ft_freestruct(data);
	return (0);
}
