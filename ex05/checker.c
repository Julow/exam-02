/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:54:37 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:40:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"

int				check_island(char **map)
{
	int				line_len;
	int				i;

	line_len = -1;
	while (*map != NULL)
	{
		i = -1;
		while ((*map)[++i] != '\0')
			if ((*map)[i] != '.' && (*map)[i] != 'X')
				return (1);
		if (line_len == -1)
			line_len = i;
		else if (line_len != i || i > MAX_LINE_LEN)
			return (1);
		map++;
	}
	return (0);
}
