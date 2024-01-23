/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presorter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 11:56:39 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 17:59:38 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "sorter.h"

t_psstruct	*ft_presorter(t_psstruct *s_ps, char **tab, int size)
{
	int	*tabint;

	tabint = malloc (sizeof(int) * size);
	if (!tabint)
		return (free (s_ps), NULL);
	tabint = ft_strtointtab(tab, tabint, s_ps);
	ft_quicksorttab(s_ps, tabint, size);
	s_ps->med = tabint[size / 2];
	s_ps->q1 = tabint[size / 4];
	s_ps->q3 = tabint[(size / 2)  + size / 4];
	free (tabint);
	return (s_ps);
}