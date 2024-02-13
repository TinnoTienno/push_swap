/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsinglist.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:28:37 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:41:38 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_parsinglist(t_psstruct *solved, char **tab)
{
	t_pslist	*a;
	int			size;

	a = ft_initlist('a');
	if (!a)
		return (NULL);
	size = solved->total;
	while (--size >= 0)
	{
		if (!ft_newelement(ft_atoi(tab[size]), a, solved))
			return (ft_freelist_ps(a), NULL);
		a->total++;
	}
	return (a);
}
