/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:56:09 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:05:25 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_pslist	*a;
	
	if (argc == 1)
		return 1;
	if (argc == 2)
		a = ft_parsingstring(argv[1]);
	else
		a = ft_parsing(argc - 1, &argv[1]);
	if(!a)
		return 1;
	if (ft_checksorted(a))
		return (ft_freelist_ps(a), 0);
	ft_sorting(a);
	ft_freelist_ps(a);
	return (0);
}