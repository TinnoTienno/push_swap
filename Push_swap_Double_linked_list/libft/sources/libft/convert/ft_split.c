/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:45:39 by eschussl          #+#    #+#             */
/*   Updated: 2023/11/19 15:10:55 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab, int w)
{
	int	i;

	i = 0;
	while (i < w)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (c == 0)
		return (1);
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

static size_t	ft_sizeword(char const *s, char c, int *i)
{
	int	size;
	int	index;

	size = 0;
	index = *i;
	while (s[index] != c && s[index])
		index++;
	size = index;
	while (s[index] == c && s[index])
		index++;
	*i = index;
	return ((size_t)size);
}

static char	**ft_buildtab(char const *s, char c, char **tab, int totalword)
{
	int	i;
	int	j;
	int	w;
	int	size;

	i = 0;
	w = 0;
	while (w < totalword)
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		size = ft_sizeword(s, c, &i);
		tab[w] = ft_substr(s, j, (size - j));
		if (!tab[w])
		{
			ft_free(tab, w);
			return (NULL);
		}
		w++;
		j = i;
	}
	tab[w] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		totalword;

	if ((!s && c != '\0') || (s[0] == 0))
	{
		tab = malloc (sizeof(char *));
		if (!tab)
			return (NULL);
		tab[0] = NULL;
		return (tab);
	}
	totalword = ft_countword(s, c);
	tab = malloc (sizeof (char *) * (totalword + 1));
	if (!tab)
		return (NULL);
	tab = ft_buildtab(s, c, tab, totalword);
	if (!tab)
		return (NULL);
	return (tab);
}
