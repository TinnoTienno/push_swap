/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:16:44 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 11:41:57 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_psstruct *ft_structinit()
{
	t_psstruct *s_ps;
	
	s_ps = malloc (sizeof(t_psstruct));
	if (!s_ps)
		return (NULL);
	s_ps->tabint = NULL;
	s_ps->counta = 0;
	s_ps->countb = 0;
	s_ps->total = 0;
	return (s_ps);
}

