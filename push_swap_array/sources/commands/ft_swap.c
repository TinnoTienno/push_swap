/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:35:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 18:02:21 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_a(int *a, int *b, t_PSstruct *stru)
{
	int	tmp;
	
	(void) b;
	(void) stru;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	ft_printf("sa\n");
}

void	ft_swap_b(int *a, int *b, t_PSstruct *stru)
{
	int	tmp;
	
	(void) a;
	(void) stru;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	ft_printf("sb\n");
}

void	ft_swap_both(int *a, int *b, t_PSstruct *stru)
{
	int	tmp;
	
	(void) b;
	(void) stru;
	tmp = a[0];
	a[0] = a[1];
	a[1] = tmp;
	tmp = b[0];
	b[0] = b[1];
	b[1] = tmp;
	ft_printf("ss\n");
}