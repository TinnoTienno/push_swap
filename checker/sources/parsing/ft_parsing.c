/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:01:25 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:14:38 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_pslist	*ft_parsing(int size, char	**tab)
{
	t_pslist	*a;

	a = ft_initlist('a');
	while (--size >= 0)
	{
		if (!ft_newelement(ft_atoi(tab[size]), a))
			return (ft_freelist_ps(a), NULL);
		a->total++;
	}
	return (a);
}