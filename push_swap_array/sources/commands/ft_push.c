/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:44:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 18:19:08 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_a(int *a, int *b, t_PSstruct *stru)
{
	int tmp;
	
	tmp = b[0];
	ft_memmove(a + sizeof(int), a, stru->sizea);
	a[0] = tmp;
	ft_memmove(b - sizeof(int), b, stru->sizeb);
	stru->sizea++;
	stru->sizeb--;
	ft_printf("pa\n");
}

void	ft_push_b(int *a, int *b, t_PSstruct *stru)
{
	int tmp;
	
	tmp = a[0];
	ft_memmove(b + sizeof(int), b, stru->sizeb);
	b[0] = tmp;
	ft_memmove(a, a + sizeof(int), stru->sizea);
	stru->sizeb++;
	stru->sizea--;
	ft_printf("pb\n");
}
