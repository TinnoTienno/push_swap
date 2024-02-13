/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:56:09 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:20:24 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_psstruct	*solved;

	if (argc == 1)
		return (1);
	solved = ft_initstruct_ps(argc - 1, &argv[1]);
	if (!solved)
		return (1);
	ft_pslist(&argv[1], solved);
	ft_freestruct_ps(solved);
}
