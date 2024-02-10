/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comparecheck.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:22:25 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:27:38 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_comparecheck(char *str, char **cmdstab)
{
	int i;
	int j;

	i = 0;
	while (cmdstab[i])
	{
		j = 0;
		while (str[j] == cmdstab[i][j])
			j++;
		if (!str[j] && !cmdstab[i][j])
			return (i);
		i++;
	}
	return (-1);
}