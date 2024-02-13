/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:37:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/05 14:03:40 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

void	ft_display_struct(t_psstruct *s_ps)
{
	int	i;

	i = -1;
	ft_printf_fd(1, "--DISPLAY STRUCT--\n");
	ft_printf_fd(1, "total = %d\n", s_ps->size);
	while (++i < s_ps->size)
		ft_printf_fd(1, "|-> %d\n", s_ps->tab[i]);
	ft_printf_fd(1, "----\n");
}