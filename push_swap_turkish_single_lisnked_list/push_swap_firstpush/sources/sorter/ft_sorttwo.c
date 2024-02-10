/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorttwo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:25:54 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/06 15:06:29 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorttwo(t_pslist *a)
{
	if (a->head->value > a->head->next->value)
		ft_printf_fd(1, "sa\n");
}