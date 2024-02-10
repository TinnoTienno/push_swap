/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strread.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:30:46 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/05 13:50:12 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strread(int fd, const char *str, va_list args)
{
	int			count;
	int			i;
	t_printfstruct	new_struct;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_initstruct(&new_struct);
			ft_check(&str[i + 1], &new_struct);
			count += ft_percentsign(fd, new_struct, args);
			i += new_struct.flag_size;
		}
		else
			count += ft_putlchar_fd(fd, (const char) str[i]);
		i++;
	}
	return (count);
}
