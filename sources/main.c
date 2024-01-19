/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:16 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 14:17:43 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"

int main(int argc, char **argv)
{
	t_PSlist *a;
	t_PSlist *b;
	int i;
	
	i = 1;
	if (argc == 1)
		return (0);
	a = ft_listinit('a');
	if (!a)
		return (0);
	b = ft_listinit('b');
	if (!b)
		return (free (a), 0);
	if (!ft_listfill(a, &argv[1], argc - 2))
		return (free(b), 0);
	ft_push_b(a,b);
	ft_push_b(a,b);
	ft_display_stack(a);
	ft_display_stack(b);
	ft_reverse_rotate_both(a,b);
	ft_display_stack(a);
	ft_display_stack(b);
	ft_freelistPS(a);
	ft_freelistPS(b);
}
