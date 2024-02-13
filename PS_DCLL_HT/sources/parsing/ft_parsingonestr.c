/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsingonestr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:11:29 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:41:55 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_countsize(char **tab)
{
	int	count;

	count = 0;
	while (tab[count])
		count++;
	return (count);
}

t_psstruct	*ft_parsingonestr(char *str, t_psstruct *solved)
{
	char	**tab;

	tab = ft_split(str, ' ');
	if (!tab)
		return (free(solved), NULL);
	solved->total = ft_countsize(tab);
	solved = ft_parsingstr(tab, solved);
	ft_freetab_ps(tab);
	return (solved);
}
