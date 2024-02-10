/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_commandparsing.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:09:35 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:12:03 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void ft_commandsparsing(char **cmdstab, t_pslist *a, t_pslist *b)
{
	char	*str;
	int		icmds;
	
	str = get_next_line(1);
	while (str)
	{
		icmds = ft_comparecheck(str, cmdstab);
		if (icmds >= 0)
			ft_command(icmds, a, b);
		str = get_next_line(1);
	}
}