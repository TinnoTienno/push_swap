/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestruct_ps.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 11:24:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 15:42:57 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freestruct_ps(t_psstruct *solved)
{
	if (!solved)
		return ;
	if (!solved->tabint)
		return (free(solved));
	return (free(solved->tabint), free(solved));
}
