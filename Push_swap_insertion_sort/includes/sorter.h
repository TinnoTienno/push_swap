/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:22:31 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/30 18:39:58 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTER_H
# define SORTER_H

# include "push_swap.h"

void		ft_sorter(t_psstruct *s_ps, char **tab, int size);
t_psstruct	*ft_presorter(t_psstruct *s_ps, char **tab, int size);
void 		ft_quicksorttab(t_psstruct *s_ps, int *tab, int size);
void		ft_quicksortlist(t_pslist *a, t_pslist *b, t_psstruct *s_ps);
int			ft_check_stack(t_pslist *list);
void		ft_insertsort(t_pslist *a, t_pslist *b, t_psstruct *s_ps);
int			ft_checksorta(t_pslist *a);
int			ft_checksortb(t_pslist *b);
void		ft_pushlist(t_pslist *a, t_pslist *b, t_psstruct *s_ps);

#endif