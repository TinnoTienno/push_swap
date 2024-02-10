/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:21:45 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:12:46 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_sorting(t_pslist *a, t_pslist *b)
{
	char *cmdstab[12];

	ft_cmdsvalues1(cmdstab);
	ft_cmdsvalues2(cmdstab);
	ft_commandsparsing(cmdstab, a, b);
}