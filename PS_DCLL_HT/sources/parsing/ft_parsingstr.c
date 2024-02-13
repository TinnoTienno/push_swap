/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsingstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:55:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:04 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_psstruct	*ft_parsingstr(char **tab, t_psstruct *solved)
{
	int	i;

	solved->tabint = ft_calloc(solved->total, sizeof(int));
	if (!solved->tabint)
		return (free(solved), NULL);
	i = 0;
	while (i < solved->total)
	{
		if (ft_error_ps(tab, i, solved->tabint))
			return (free (solved->tabint), free(solved), NULL);
		solved->tabint[i] = ft_atoi(tab[i]);
		i++;
	}
	return (solved);
}
