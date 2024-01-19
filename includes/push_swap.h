/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:52:26 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/19 11:55:43 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft.h"

typedef struct	s_PSelement	t_PSelement;
struct s_PSelement
{
	t_PSelement	*next;
	int			value;
	int			index;
};

typedef struct	s_PSlist		t_PSlist;
struct s_PSlist
{
	t_PSelement		*first;
	int				name;
	int				total;
};

t_PSlist	*ft_listinit(int c);
t_PSlist	*ft_listfill(t_PSlist *list, char **tab, int nb);
void		ft_display_stack(t_PSlist *a);
t_PSlist 	*ft_newelement(t_PSlist *list, int nb);
void		ft_freelistPS(t_PSlist *list);
int			ft_error(char *str);

#endif
