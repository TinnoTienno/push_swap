/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 16:17:20 by eschussl         ###   ########.fr       */
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
void 		ft_commandsparsing(char **cmdstab, t_pslist *a, t_pslist *b);
int			ft_comparecheck(char *str, char **cmdstab);

void	ft_freelist_ps(t_pslist *list);
void	ft_freetab(char **tab);

void	ft_display_forward_list(t_pslist *list);
void	ft_display_backward_list(t_pslist *list);

void 	ft_sorting(t_pslist *a, t_pslist *b);
void	ft_cmdsvalues1(char **tab);
void	ft_cmdsvalues2(char **tab);
int 	ft_checksorted(t_pslist *a, t_pslist *b);

int		ft_push_a(t_pslist *a, t_pslist *b, int p);
int		ft_push_b(t_pslist *a, t_pslist *b, int p);
int		ft_swap_a(t_pslist *a, t_pslist *b, int p);
int		ft_swap_b(t_pslist *a, t_pslist *b, int p);
int		ft_swap_both(t_pslist *a, t_pslist *b, int p);
int		ft_rotate_a(t_pslist *a, t_pslist *b, int p);
int		ft_rotate_b(t_pslist *a, t_pslist *b, int p);
int		ft_rotate_both(t_pslist *a, t_pslist *b, int p);
int		ft_reverse_rotate_a(t_pslist *a, t_pslist *b, int p);
int		ft_reverse_rotate_b(t_pslist *a, t_pslist *b, int p);
int		ft_reverse_rotate_both(t_pslist *a, t_pslist *b, int p);
void	ft_command(int index, t_pslist *a, t_pslist *b);

#endif
