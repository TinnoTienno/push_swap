/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:21:55 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/05 13:38:27 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_c(int fd, t_printfstruct structure, int c)
{
	char	*str;
	int		count;

	count = 1;
	if (structure.v_width)
	{
		str = ft_setalloc(sizeof(char), structure.v_width + 1, ' ');
		if (!str)
			return (0);
		if (!structure.minus)
			str[ft_strlen(str) - 1] = c;
		count = structure.v_width;
	}
	else
	{
		str = ft_setalloc(sizeof(char), 2, ' ');
		if (!str)
			return (0);
	}
	if (structure.minus || !structure.v_width)
		str[0] = c;
	count = ft_putlstr_fd(fd, str, count);
	free (str);
	return (count);
}
