/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmdsvalues.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 14:47:13 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/10 15:07:56 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "checker.h"
#include <stdio.h>
#include "libft.h"

void ft_cmdsvalues2(char **tab)
{
	char str6[3];
	char str7[3];
	char str8[4];
	char str9[4];
	char str10[4];
	
	ft_strlcpy(str6, "rb", 3);
	ft_strlcpy(str7, "rr", 3);
	ft_strlcpy(str8, "rra", 4);
	ft_strlcpy(str9, "rrb", 4);
	ft_strlcpy(str10, "rrr", 4);
	tab[6] = str6;
	tab[7] = str7;
	tab[8] = str8;
	tab[9] = str9;
	tab[10] = str10;
	tab[11] = NULL;
}
void ft_cmdsvalues1(char **tab)
{
	char str0[3];
	char str1[3];
	char str2[3];
	char str3[3];
	char str4[3];
	char str5[3];

	ft_strlcpy(str0, "pa", 3);
	ft_strlcpy(str1, "pb", 3);
	ft_strlcpy(str2, "sa", 3);
	ft_strlcpy(str3, "sb", 3);
	ft_strlcpy(str4, "ss", 3);
	ft_strlcpy(str5, "ra", 3);
	tab[0] = str0;
	tab[1] = str1;
	tab[2] = str2;
	tab[3] = str3;
	tab[4] = str4;
	tab[5] = str5;
}

