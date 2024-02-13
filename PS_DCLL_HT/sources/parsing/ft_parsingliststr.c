/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsingliststr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:11:50 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:40:41 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pslist	*ft_parsingliststr(t_psstruct *solved, char *str)
{
	char		**tab;
	t_pslist	*a;

	tab = ft_split(str, ' ');
	if (!tab)
		return (free(solved), NULL);
	a = ft_parsinglist(solved, tab);
	ft_freetab_ps(tab);
	if (!a)
		return (NULL);
	else
		return (a);
}
