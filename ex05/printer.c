/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 11:07:33 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:34:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"
#include <unistd.h>

void			print_island(char **map)
{
	const int		len = ft_strlen(*map);

	while (*map != NULL)
	{
		write(1, *map, len);
		write(1, "\n", 1);
		map++;
	}
}
