/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtointtab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:55:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 15:03:44 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_strtointtab(char **tab, int *tabint, t_psstruct *s_ps)
{
	int i;

	i = 0;
	(void) s_ps;
	while (tab[i])
	{
		tabint[i] = ft_atoi(tab[i]);
		if (tabint[i] > s_ps->max)
			s_ps->max = tabint[i];
		if (tabint[i] < s_ps->min)
			s_ps->min = tabint[i];
		i++;
	}
	return (tabint);
}