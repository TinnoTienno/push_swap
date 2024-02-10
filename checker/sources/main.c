/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:56:09 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 14:33:06 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_pslist	*a;
	t_pslist	*b;
	
	if (argc == 1)
		return 1;
	if (argc == 2)
		a = ft_parsingstring(argv[1]);
	else
		a = ft_parsing(argc - 1, &argv[1]);
	if(!a)
		return 1;
	b = ft_initlist('c');
	if (!b)
		return (free(a), 1);
	ft_sorting(a, b);
	ft_checksorted(a, b);
	ft_freelist_ps(a);
	ft_freelist_ps(b);
	return (0);
}