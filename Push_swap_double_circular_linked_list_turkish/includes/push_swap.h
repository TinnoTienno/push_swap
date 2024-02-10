/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 13:01:03 by eschussl         ###   ########.fr       */
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
	int				nbmoveboth;
};

typedef struct	s_pslist		t_pslist;
struct s_pslist
{
	t_pselement		*head;
	char			name;
	int				total;
	int				max;
	int				min;
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
t_pslist	*ft_parsingstring(char *str);

int			ft_error_ps(char *str, t_pslist *a);

void	ft_freelist_ps(t_pslist *list);
void	ft_freetab(char **tab);

void	ft_display_forward_list(t_pslist *list);
void	ft_display_backward_list(t_pslist *list);

void	ft_sorting(t_pslist *a);
void	ft_pushing_to_b(t_pslist *a, t_pslist *b);
void 	ft_sort3(t_pslist *a, t_pslist *b);
void	ft_sort4(t_pslist *a, t_pslist *b);
void	ft_lookformin(t_pslist *a, t_pslist *b);
void	ft_pushing_to_a(t_pslist *a, t_pslist *b);
void	ft_pushtoa(t_pslist *a, t_pslist *b);;

int		ft_checksorted(t_pslist *a);
void	ft_nbmove(t_pslist *a, t_pslist *b);
void	ft_nbmovecumul(t_pslist *list);
int		ft_nbmovetoa(t_pslist *a, int value);

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
void	ft_commandsa(t_pslist *a, t_pslist *b, int nbmove);
void	ft_commandsb(t_pslist *b, t_pslist *a, int nbmove);
void	ft_commandsrboth(t_pslist *a, t_pslist *b, int nbmovea, int nbmoveb);
void	ft_commandsrrboth(t_pslist *a, t_pslist *b, int nbmovea, int nbmoveb);

#endif
