/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:43:49 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:43:31 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_commandsa(t_pslist *a, t_pslist *b, int nbmove)
{
	if (nbmove > 0)
	{
		while (nbmove-- > 0)
			ft_rotate_a(a, b, 1);
	}
	else
	{
		while (nbmove++ < 0)
			ft_reverse_rotate_a(a, b, 1);
	}
}

void	ft_commandsb(t_pslist *b, t_pslist *a, int nbmove)
{
	if (nbmove > 0)
	{
		while (nbmove > 0)
		{
			ft_rotate_b(a, b, 1);
			nbmove--;
		}
	}
	else
	{
		while (nbmove < 0)
		{
			ft_reverse_rotate_b(a, b, 1);
			nbmove++;
		}
	}
}

void	ft_commandsrboth(t_pslist *a, t_pslist *b, int nbmovea, int nbmoveb)
{
	if (nbmovea > nbmoveb)
	{
		nbmovea -= nbmoveb;
		while (nbmoveb-- > 0)
			ft_rotate_both(a, b, 1);
		while (nbmovea-- > 0)
			ft_rotate_a(a, b, 1);
	}
	else
	{
		nbmoveb -= nbmovea;
		while (nbmovea > 0)
		{
			nbmovea--;
			ft_rotate_both(a, b, 1);
		}
		while (nbmoveb > 0)
		{
			nbmoveb--;
			ft_rotate_b(a, b, 1);
		}
	}
}

void	ft_commandsrrboth(t_pslist *a, t_pslist *b, int nbmovea, int nbmoveb)
{
	if (nbmovea < nbmoveb)
	{
		nbmovea -= nbmoveb;
		while (nbmoveb++ < 0)
			ft_reverse_rotate_both(a, b, 1);
		while (nbmovea++ < 0)
			ft_reverse_rotate_a(a, b, 1);
	}
	else
	{
		nbmoveb -= nbmovea;
		while (nbmovea < 0)
		{
			ft_reverse_rotate_both(a, b, 1);
			nbmovea++;
		}
		while (nbmoveb < 0)
		{
			ft_reverse_rotate_b(a, b, 1);
			nbmoveb++;
		}
	}
}
