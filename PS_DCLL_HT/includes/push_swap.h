/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/13 14:15:53 by eschussl         ###   ########.fr       */
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
	int				index;
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
	int				min;
	int				max;
};

typedef struct	s_psstruct	t_psstruct;
struct	s_psstruct
{
	int	*tabint;
	int	total;
};

t_pslist	*ft_parsing(int size, char	**tab);
t_pselement	*ft_newelement(int value, t_pslist *a, t_psstruct *solved);
t_pslist	*ft_initlist(char c);
t_psstruct	*ft_initstruct_ps(int size, char **tab);
t_psstruct	*ft_parsingonestr(char *str, t_psstruct *solved);
t_psstruct	*ft_parsingstr(char **tab, t_psstruct *solved);
t_pslist 	*ft_parsinglist(t_psstruct *solved, char **tab);
t_pslist 	*ft_parsingliststr(t_psstruct *solved, char *str);

int	ft_error_ps(char **tab, int index, int *tabint);

void	ft_freelist_ps(t_pslist *list);
void	ft_freetab_ps(char **tab);
void	ft_freestruct_ps(t_psstruct *solved);

int		ft_checksorted(t_pslist *a);
void	ft_nbmove(t_pslist *a, t_pslist *b);
void	ft_nbmovecumul(t_pslist *list);

void	ft_display_forward_list(t_pslist *list);
void	ft_display_backward_list(t_pslist *list);

void	ft_sorting(t_pslist *a, t_pslist *b);
void	ft_quicksorttab(int *tab, int size);
void	ft_firstpush(t_pslist *a, t_pslist *b, t_psstruct *solved);
void	ft_lookformin(t_pslist *a, t_pslist *b);
void	ft_pushing_to_a(t_pslist *a, t_pslist *b);
void	ft_sort3(t_pslist *a, t_pslist *b);
void	ft_sort4(t_pslist *a, t_pslist *b);
int		ft_sortingsmall(t_pslist *a, t_pslist *b);

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

void	ft_pslist(char **argv, t_psstruct *solved);
#endif
