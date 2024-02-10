/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertsort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:45:17 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 18:46:22 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "commands.h"
#include "sorter.h"

void	ft_countmod(int value, int nb, t_psstruct *s_ps)
{
	if (nb == 1)
		s_ps->counta += value;
	if (nb == 2)
		s_ps->countb += value;
	if (nb == 3)
	{
		s_ps->counta += value;
		s_ps->countb += value;
	}
}
int	ft_moveonea(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	if (a->head->value < a->tail->value && s_ps->counta > 0)
	{
		ft_reverse_rotate_a(a, b);
		ft_countmod(-1, 1, s_ps);
		return (1);
	}
	if (a->head->value > a->head->next->value && s_ps->counta < a->total)
	{
		ft_swap_a(a,b);
		return (1);
	}
	if (s_ps->counta < a->total - 1 && ft_checksorta(a) == 0) 
	{
		ft_rotate_a(a, b);
		ft_countmod(1, 1, s_ps);
		return (1);
	}
	return 0;
}

int	ft_moveoneb(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	if (b->head->value > b->tail->value && s_ps->countb > 0)
	{
		ft_reverse_rotate_b(a, b);
		ft_countmod(-1, 2, s_ps);
		return (1);
	}
	if (b->head->value < b->head->next->value && s_ps->countb < b->total)
	{
		ft_swap_b(a,b);
		return (1);
	}
	if (s_ps->countb < b->total - 1 && ft_checksortb(b) == 0) 
	{
		ft_rotate_b(a, b);
		ft_countmod(1, 2, s_ps);
		return (1);
	}
	return 0;
}

int	ft_moveboth(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	if ((a->head->value < a->tail->value && s_ps->counta > 0) && (b->head->value > b->tail->value && s_ps->countb > 0))
	{
		ft_reverse_rotate_both(a, b);
		ft_countmod(-1, 3, s_ps);
		return (1);
	}
	if ((a->head->value > a->head->next->value && s_ps->counta < a->total) && (b->head->value < b->head->next->value && s_ps->countb < b->total))
	{
		ft_swap_both(a,b);
		return (1);
	}
	if ((s_ps->counta < a->total - 2 && ft_checksorta(a) == 0) && (s_ps->countb < b->total - 2 && ft_checksortb(b) == 0))
	{
		ft_rotate_both(a, b);
		ft_countmod(1, 3, s_ps);
		return (1);
	}
	return (0);
}

void	ft_insertsort(t_pslist *a, t_pslist *b, t_psstruct *s_ps)
{
	int both;
	int	one;
	int alternate;
	
	both = 1;
	alternate = 1;
	one = 1;
	while (both == 1 || one == 1)
	{
		both = 0;
		one = 0;
		both = ft_moveboth(a, b, s_ps);
		if (both == 0)
		{
			if (alternate > 0)
				one = ft_moveonea(a, b, s_ps);
			else
				one = ft_moveoneb(a, b, s_ps);
			if (one == 0 && alternate > 0)
				one = ft_moveoneb(a, b, s_ps);
			else if (one == 0 && alternate < 0)
				one = ft_moveonea(a, b, s_ps);
			alternate = -alternate;
		}
			
	}
}