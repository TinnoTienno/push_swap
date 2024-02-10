/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/07 18:14:49 by eschussl         ###   ########.fr       */
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
	t_pselement		*previous;
	int				value;
	int				nbmovea;
	int 			nbmoveb;
};

typedef struct	s_pslist		t_pslist;
struct s_pslist
{
	t_pselement		*head;
	char			name;
	int				total;
};

typedef struct	s_psstruct	t_psstruct;
struct	s_psstruct
{
	int	*tabint;
	int	total;
};

t_pslist	*ft_parsing(int size, char	**tab);
t_pselement	*ft_newelement(int value, t_pslist *a);
t_pslist	*ft_initlist(char c);

int			ft_error_ps(char *str, t_pslist *a);

void	ft_freelist_ps(t_pslist *list);

void	ft_display_forward_list(t_pslist *list);
void	ft_display_backward_list(t_pslist *list);

void	ft_sorting(t_pslist *a);

void	ft_push_a(t_pslist *a, t_pslist *b, int p);
void	ft_push_b(t_pslist *a, t_pslist *b, int p);
void	ft_swap_a(t_pslist *a, t_pslist *b, int p);
void	ft_swap_b(t_pslist *a, t_pslist *b, int p);
void	ft_swap_both(t_pslist *a, t_pslist *b, int p);
void	ft_rotate_a(t_pslist *a, t_pslist *b, int p);
void	ft_rotate_b(t_pslist *a, t_pslist *b, int p);
void	ft_rotate_both(t_pslist *a, t_pslist *b, int p);
void	ft_reverse_rotate_a(t_pslist *a, t_pslist *b, int p);
void	ft_reverse_rotate_b(t_pslist *a, t_pslist *b, int p);
void	ft_reverse_rotate_both(t_pslist *a, t_pslist *b, int p);

#endif
