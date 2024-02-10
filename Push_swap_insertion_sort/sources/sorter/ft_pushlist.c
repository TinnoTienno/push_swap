/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushlist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:27:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 16:23:52 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"

void	ft_pushlist(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	(void) s_ps;
	while (b->head)
		ft_push_a(a, b);
}