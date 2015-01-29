/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:59:53 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:51:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"

static void		fill_island(char **map, int h, int i, char c)
{
	if ((*map)[i] != 'X')
		return ;
	(*map)[i] = c;
	if (map[1] != NULL)
		fill_island(map + 1, h + 1, i, c);
	if (h > 0)
		fill_island(map - 1, h - 1, i, c);
	if (i > 0)
		fill_island(map, h, i - 1, c);
	fill_island(map, h, i + 1, c);
}

int				count_island(char **map)
{
	int				count;
	int				i;
	int				h;

	h = 0;
	count = 0;
	while (*map != NULL)
	{
		i = -1;
		while ((*map)[++i] != '\0')
			if ((*map)[i] == 'X')
				fill_island(map, h, i, '0' + (count++));
		map++;
		h++;
	}
	return (count);
}
