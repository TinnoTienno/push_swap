/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsingstring.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:30:17 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 12:51:37 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_countsize(char **tab)
{
	int count;

	count = 0;
	while (tab[count])
		count++;
	return count;
}

t_pslist	*ft_parsingstring(char *str)
{
	t_pslist 	*a;
	char		**tab;

	tab = ft_split(str, ' ');
	if (!tab)
		return NULL;
	a = ft_parsing(ft_countsize(tab), tab);
	ft_freetab (tab);
	return a ;
}