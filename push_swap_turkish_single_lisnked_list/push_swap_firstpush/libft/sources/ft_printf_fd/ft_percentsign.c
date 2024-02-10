/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percentsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:44:47 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/05 13:50:04 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_percentsign(int fd, t_printfstruct structure, va_list args)
{
	int	count;

	count = 0;
	if (structure.specifier == 'c')
		count = ft_c(fd, structure, va_arg(args, int));
	else if (structure.specifier == 's')
		count = ft_s(fd, structure, va_arg(args, char *));
	else if (structure.specifier == 'p')
		count = ft_p(fd, structure, va_arg(args, size_t));
	else if (structure.specifier == 'd' || structure.specifier == 'i')
		count = ft_i(fd, structure, va_arg(args, int));
	else if (structure.specifier == 'u')
		count = ft_u(fd, structure, va_arg(args, unsigned int));
	else if (structure.specifier == 'x' || structure.specifier == 'X')
		count = ft_x(fd, structure, va_arg(args, unsigned int));
	else if (structure.specifier == '%')
		count = ft_putlchar_fd(fd, '%');
	return (count);
}
