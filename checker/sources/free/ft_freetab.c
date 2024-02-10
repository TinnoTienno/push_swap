/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:15:41 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:17:12 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_freetab(char **tab)
{
	int i;
	
	i = 0;
	if (!tab)
		return;
	while (tab[i])
		free (tab[i++]);
	free (tab);
}