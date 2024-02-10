/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:56:17 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 17:55:55 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

typedef struct	s_PSstruct	t_PSstruct;
struct	s_PSstruct
{
	int	min;
	int	max;
	int q1;
	int q3;
	int med;
	int	sizea;
	int sizeb;
};

int *ft_arrayinit(int size, char **argv, t_PSstruct *stru);
void	ft_display_array(int *array, int size);
int ft_error(char *str);
t_PSstruct *ft_structinit();
#endif