/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/23 14:52:46 by eschussl         ###   ########.fr       */
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
	int				index;
};

typedef struct	s_pslist		t_pslist;
struct s_pslist
{
	t_pselement		*head;
	t_pselement		*tail;
	char			name;
	int				total;
};

typedef struct	s_psstruct	t_psstruct;
struct	s_psstruct
{
	int				min;
	int				max;
	int 			q1;
	int 			q3;
	int 			med;
};

t_pslist	*ft_listinit(char c);
t_pslist 	*ft_listfill(t_pslist *list, char **tab, int nb);
void		ft_display_stack(t_pslist *list);
void		ft_display_struct(t_psstruct *strct);
void		ft_display_tab(int *tab, int size);
t_pslist 	*ft_newelement(t_pslist *list, int nb);
t_pslist 	*ft_firstelement(t_pslist *list, int nb);
void		ft_freelistps(t_pslist *list);
int			ft_error(char *str);
t_psstruct	*ft_structinit();
int			*ft_strtointtab(char **tab, int *tabint, t_psstruct *s_ps);


#endif
