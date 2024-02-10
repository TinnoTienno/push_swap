/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:56:09 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 16:59:39 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pslist	*a;
	
	if (argc <= 2)
		return ft_printf_fd(2, "error\n");
	a = ft_parsing(argc - 1, &argv[1]);
	ft_sorting(a);
	ft_freelist_ps(a);
}