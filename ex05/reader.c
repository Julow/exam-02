/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:14:07 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:38:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"
#include <stdlib.h>
#include <unistd.h>

static char		**init_split(const char *str, char c)
{
	int				count;
	int				i;

	i = -1;
	count = 0;
	while (str[++i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return ((char**)malloc(sizeof(char*) * (1 + count)));
}

static char		**ft_strsplit(const char *str, char c)
{
	int				i;
	int				len;
	int				s_i;
	char			**split;

	split = init_split(str, c);
	s_i = 0;
	i = 0;
	while (1)
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		len = i + 1;
		while (str[len] != '\0' && str[len] != c)
			len++;
		split[s_i++] = ft_strldup(str + i, len - i);
		i = len;
	}
	split[s_i] = NULL;
	return (split);
}

char			**read_island(int fd)
{
	char			*content;
	int				len;
	char			buff[BUFF_SIZE];
	char			**map;

	content = NULL;
	while ((len = read(fd, buff, BUFF_SIZE)) > 0)
		str_add(&content, buff, len);
	map = ft_strsplit(content, '\n');
	free(content);
	return (map);
}
