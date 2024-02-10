/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:12:15 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/16 16:45:02 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freelist(t_gnlist **list)
{
	int				i;
	t_gnlelement	*element;
	t_gnlelement	*tmp;

	i = 0;
	while (i < 1024)
	{
		if (list[i])
		{
			element = list[i]->first;
			while (element->next)
			{
				tmp = element->next;
				element->content[0] = 0;
				element->ssize = 0;
				element->check = 0;
				free(element);
				element = tmp;
			}
			free (list[i]);
			list[i] = NULL;
		}
		i++;
	}
}

void	ft_freelistfd(t_gnlist **list, int fd)
{
	t_gnlelement	*element;
	t_gnlelement	*tmp;

	element = list[fd]->first;
	while (element)
	{
		tmp = element->next;
		element->content[0] = 0;
		element->ssize = 0;
		element->check = 0;
		free(element);
		element = tmp;
	}
	free (list[fd]);
	list[fd] = NULL;
}

int	ft_gnlistsize(t_gnlist *list)
{
	int				count;
	t_gnlelement	*element;

	element = list->first;
	count = 0;
	while (element->next)
	{
		count += element->ssize;
		element = element->next;
	}
	count += element->check + 1;
	return (count);
}

char	*ft_buildstr(t_gnlelement *element, char *tmp)
{
	int	i;
	int	j;

	i = 0;
	while (element->next)
	{
		j = 0;
		while (element->ssize > j)
			tmp[i++] = element->content[j++];
		element = element->next;
	}
	j = 0;
	while (element->check >= j)
		tmp[i++] = element->content[j++];
	tmp[i] = '\0';
	return (tmp);
}
