/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structinit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:27:19 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 17:55:40 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_PSstruct *ft_structinit()
{
	t_PSstruct *strct;
	
	strct = malloc (sizeof(t_PSstruct));
	if (!strct)
		return (NULL);
	strct->max = -2147483648;
	strct->min = 2147483647;
	strct->med = 0;
	strct->q1 = 0;
	strct->q3 = 0;
	strct->sizea = 0;
	strct->sizeb = 0;
	return (strct);
}