/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 14:50:59 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft.h"
# include <stdio.h>

typedef struct	s_pselement	t_pselement;
struct s_pselement
{
	t_pselement		*next;
	int				value;
	int				nbmovea;
	int				nbmoveb;
};

typedef struct	s_pslist		t_pslist;
struct s_pslist
{
	t_pselement		*head;
	int				total;
};

typedef struct	s_psstruct		t_psstruct;
struct s_psstruct
{
	int				*tab;
	int				size;
};

t_pslist	*ft_make(char **tab, int size);
t_pselement	*ft_new_element(t_pslist *a, int nb);
int			*ft_init_tab(char **tab, int size);

void		ft_sorter(t_pslist	*a, t_psstruct *data);
t_pslist	*ft_sort_b(t_pslist *a, t_psstruct *data);
void 		ft_quicksorttab(int *tab, int size);

void		ft_display_forward_stack(t_pslist *list);

void		ft_freelistps(t_pslist *list);
int			ft_error_ps(char *str, t_pslist	*a);
void		ft_freestruct(t_psstruct *data);

void		ft_swap_a(t_pslist *a, t_pslist *b, int p);
void		ft_swap_b(t_pslist *a, t_pslist *b, int p);
void		ft_swap_both(t_pslist *a, t_pslist *b, int p);
void 		ft_rotate_a(t_pslist *a, t_pslist *b, int p);
void 		ft_rotate_b(t_pslist *a, t_pslist *b, int p);
void 		ft_rotate_both(t_pslist *a, t_pslist *b, int p);
void		ft_reverse_rotate_a(t_pslist *a, t_pslist *b, int p);
void		ft_reverse_rotate_b(t_pslist *a, t_pslist *b, int p);
void		ft_reverse_rotate_both(t_pslist *a, t_pslist *b, int p);
void 		ft_push_b(t_pslist *a, t_pslist *b, int p);
void		ft_push_a(t_pslist *a, t_pslist *b, int p);

void	ft_nbmove(t_pslist *a, t_pslist *b);
int		ft_nbmovetofirststack(t_pselement *current, t_pslist *a);
int		ft_nbmovetosecondstack(t_pselement *current, t_pslist *b);
int		ft_checksorted(t_pslist *a);

#endif
