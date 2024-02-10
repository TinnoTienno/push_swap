/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:16:44 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/22 16:44:47 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_psstruct *ft_structinit()
{
	t_psstruct *s_ps;
	
	s_ps = malloc (sizeof(t_psstruct));
	if (!s_ps)
		return (NULL);
	s_ps->max = -2147483648;
	s_ps->min = 2147483647;
	s_ps->med = 0;
	s_ps->q1 = 0;
	s_ps->q3 = 0;
	return (s_ps);
}

