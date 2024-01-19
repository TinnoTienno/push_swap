/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:19:48 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:54:46 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_PSlist *ft_listfill(t_PSlist *list, char **tab, int nb)
{
	while (nb >= 0)
	{
		if (ft_error(tab[nb]) == 1)
			return (ft_freelistPS(list), ft_printf("error\n"), NULL);	
		if (!ft_newelement(list, ft_atoi(tab[nb])))
			return (NULL);
		nb--;
	}
	return (list);
}