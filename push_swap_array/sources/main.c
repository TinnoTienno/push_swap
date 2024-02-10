/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:55:22 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 18:15:27 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"

int	main(int argc, char **argv)
{
	int *a;
	int *b;
	t_PSstruct *stru;

	if (argc == 1)
		return (0);
	stru = ft_structinit();
	if (!stru)
		return (0);
	a = ft_arrayinit(argc - 1, &argv[1], stru);
	if (!a)
		return (free (stru), 0);
	b = malloc (sizeof(int) * argc - 1);
	if (!b)
		return (free (a), free (stru), 0);
	ft_display_array(a, stru->sizea);
	ft_push_b(a, b, stru);
	ft_push_b(a, b, stru);
	ft_display_array(a, stru->sizea);
	ft_display_array(b, stru->sizeb);

	free (stru);
	free (a);
	free (b);
}