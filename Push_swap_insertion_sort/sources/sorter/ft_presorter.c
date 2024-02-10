/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presorter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:56:39 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/25 18:25:15 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorter.h"

t_psstruct	*ft_presorter(t_psstruct *s_ps, char **tab, int size)
{
	s_ps->tabint = calloc (size, sizeof(int));
	if (!s_ps->tabint)
		return (free (s_ps), NULL);
	ft_strtointtab(tab, s_ps);
	ft_quicksorttab(s_ps, s_ps->tabint, size);
	return (s_ps);
}