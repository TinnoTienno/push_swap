/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:15:40 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/22 16:44:14 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef COMMANDS_H
# define COMMANDS_H

# include "push_swap.h"

void 		ft_swap_a(t_pslist *a, t_pslist *b);
void 		ft_swap_b(t_pslist *a, t_pslist *b);
void		ft_swap_both(t_pslist *a, t_pslist *b);
void		ft_push_a(t_pslist *a, t_pslist *b);
void		ft_push_b(t_pslist *a, t_pslist *b);
void		ft_rotate_a(t_pslist *a, t_pslist *b);
void		ft_rotate_b(t_pslist *a, t_pslist *b);
void		ft_rotate_both(t_pslist *a, t_pslist *b);
void		ft_reverse_rotate_a(t_pslist *a, t_pslist *b);
void		ft_reverse_rotate_b(t_pslist *a, t_pslist *b);
void		ft_reverse_rotate_both(t_pslist *a, t_pslist *b);
#endif