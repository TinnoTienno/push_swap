/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:41:53 by eschussl          #+#    #+#             */
/*   Updated: 2024/01/16 17:02:18 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_gnlelement	*ft_buildelement(int fd, t_gnlist **list)
{
	int				reader;
	int				i;
	t_gnlelement	*element;

	element = malloc (sizeof(t_gnlelement));
	if (!element)
		return (ft_freelist(list), NULL);
	reader = read(fd, element->content, GNL_BUFFER_SIZE);
	if (reader == -1)
		return (ft_freelist(list), NULL);
	element->content[reader] = '\0';
	element->ssize = reader;
	element->next = NULL;
	element->check = element->ssize;
	i = 0;
	while (i < reader && element->content[i] != '\n')
		i++;
	element->check = i;
	return (element);
}

t_gnlist	*ft_gnlistinit(int fd, t_gnlist **list)
{
	t_gnlist	*newlist;

	newlist = malloc(sizeof(t_gnlist));
	if (!newlist)
		return (ft_freelist(list), NULL);
	newlist->first = ft_buildelement(fd, list);
	return (newlist);
}

t_gnlist	*ft_gnlistreinit(int fd, t_gnlist **list, t_gnlelement *end)
{
	t_gnlelement	*new;
	int				i;
	int				j;

	new = malloc(sizeof(t_gnlelement));
	if (!new)
		return (ft_freelist(list), NULL);
	new->next = NULL;
	new->ssize = end->ssize - end->check - 1;
	i = end->ssize - 1;
	j = new->ssize;
	new->check = new->ssize;
	new->content[j--] = '\0';
	while (i > end->check)
	{
		if (end->content[i] == '\n')
			new->check = j;
		new->content[j--] = end->content[i--];
	}
	ft_freelistfd(list, fd);
	list[fd] = malloc (sizeof(t_gnlist));
	if (!list[fd])
		return (ft_freelist(list), NULL);
	list[fd]->first = new;
	return (list[fd]);
}

char	*ft_ender(t_gnlist **list, int fd)
{
	char			*tmp;
	t_gnlelement	*element;

	if (list[fd]->first->ssize == 0 && !list[fd]->first->next)
		return (ft_freelistfd(list, fd), NULL);
	tmp = malloc(sizeof(char) * (ft_listsize(list[fd]) + 1));
	if (!tmp)
		return (ft_freelist(list), NULL);
	element = list[fd]->first;
	tmp = ft_buildstr(element, tmp);
	while (element->next)
		element = element->next;
	if (element->check < element->ssize - 1)
	{
		list[fd] = ft_gnlistreinit(fd, list, element);
		if (!list[fd])
			return (NULL);
	}
	else
		ft_freelistfd(list, fd);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static t_gnlist	*list[1024];
	char			*str;
	t_gnlelement	*element;

	if (fd < 0 || GNL_BUFFER_SIZE < 1 || fd >= 1024 || read(fd, NULL, 0) == -1)
		return (NULL);
	if (!list[fd])
	{
		list[fd] = ft_gnlistinit(fd, list);
		if (!list[fd])
			return (NULL);
		if (list[fd]->first->ssize == 0 || !list[fd]->first)
			return (ft_freelistfd(list, fd), NULL);
	}
	element = list[fd]->first;
	while (element && element->check == element->ssize && element->ssize > 0)
	{
		element->next = ft_buildelement(fd, list);
		element = element->next;
	}
	str = ft_ender(list, fd);
	if (!str)
		return (NULL);
	return (str);
}

// int	main(void)
// {
// 	char	*str = NULL;
// 	int i;
// 	int fd;

// 	fd = open("test3.txt", O_RDONLY);
	// str = get_next_line(fd);
	// printf("next_line = |%s|\n\n", str);
	// str = get_next_line(fd);
	// printf("next_line = |%s|\n\n", str);
	// str = get_next_line(fd);
	// printf("next_line = |%s|\n\n", str);
	// i = 0;
	// while (i <= 8)
	// {
	// 	printf("|%c|\n", str[i]);`
	// 	i++;
	// }
// 	while (1)
// 	{	
// 		str = get_next_line(100);
// 		printf("new line : |%s|", str);
// 		if (!str)
// 			break;
// 		free(str);
// 	}
// 	return (0);
// }
