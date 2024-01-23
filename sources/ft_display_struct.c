/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_struct.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:37:10 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 14:43:03 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_display_struct(t_PSstruct *strct)
{
	ft_printf("== Display Struct == \n+--> MIN : %d\n+--> Q1  : %d\n+--> MED : %d\n+--> Q3  : %d\n+--> MAX : %d\n", strct->min, strct->q1, strct->med, strct->q3, strct->max);
}