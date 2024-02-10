/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtointtab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:55:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/25 18:25:56 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_strtointtab(char **tab, t_psstruct *s_ps)
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (ft_error(tab, i, s_ps))
			return (ft_printf("error\n"), free (s_ps->tabint));
		s_ps->tabint[i] = ft_atoi(tab[i]);
		i++;
	}
}