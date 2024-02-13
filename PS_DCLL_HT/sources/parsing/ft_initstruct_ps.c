/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initstruct_ps.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 10:54:06 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:41:13 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_psstruct	*ft_initstruct_ps(int size, char **tab)
{
	t_psstruct	*solved;

	solved = malloc(sizeof(t_pslist));
	if (!solved)
		return (NULL);
	if (size >= 2)
	{
		solved->total = size;
		solved = ft_parsingstr(tab, solved);
	}
	else if (size == 1)
		solved = ft_parsingonestr(tab[0], solved);
	if (!solved)
		return (NULL);
	ft_quicksorttab(solved->tabint, solved->total);
	return (solved);
}
