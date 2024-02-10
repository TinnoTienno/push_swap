/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_command.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:28:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:48:27 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_command(int index, t_pslist *a, t_pslist *b)
{
	int	(*tab[11])(t_pslist *a, t_pslist *b, int nb);
	int nb;
	
	tab[0] = ft_push_a;
	tab[1] = ft_push_b;
	tab[2] = ft_swap_a;
	tab[3] = ft_swap_b;
	tab[4] = ft_swap_both;
	tab[5] = ft_rotate_a;
	tab[6] = ft_rotate_b;
	tab[7] = ft_rotate_both;
	tab[8] = ft_reverse_rotate_a;
	tab[9] = ft_reverse_rotate_b;
	tab[10] = ft_reverse_rotate_both;
	nb = tab[index](a, b, 0);
}
