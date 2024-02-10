/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:59:25 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 18:01:45 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef COMMANDS_H
#define COMMANDS_H

# include "push_swap.h"

void	ft_push_a(int *a, int *b, t_PSstruct *stru);
void	ft_push_b(int *a, int *b, t_PSstruct *stru);
void	ft_swap_a(int *a, int *b, t_PSstruct *stru);
void	ft_swap_b(int *a, int *b, t_PSstruct *stru);
void	ft_swap_both(int *a, int *b, t_PSstruct *stru);

#endif