/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:44:16 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 15:14:24 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"
#include "sorter.h"
int main(int argc, char **argv)
{
	
	
	t_psstruct	*s_ps;
	
	if (argc <= 2)
		return (0);
	s_ps = NULL;
	s_ps = ft_structinit();
	if (!s_ps)
		return (0);
	s_ps = ft_presorter(s_ps, &argv[1], argc - 1);
	ft_display_struct(s_ps);
	ft_sorter(s_ps, &argv[1], argc - 1);
	return (0);
}
