/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:12:22 by eschussl          #+#    #+#             */
/*   Updated: 2023/12/15 15:27:33 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_setalloc(size_t elementsize, size_t elementcount, int c)
{
	char	*str;
	size_t	total;

	total = elementcount * elementsize;
	if (elementcount != 0 && total / elementcount != elementsize)
		return (NULL);
	str = malloc(total);
	if (!(str))
		return (NULL);
	ft_memset((void *) str, c, total);
	str[elementcount - 1] = 0;
	return ((void *) str);
}
