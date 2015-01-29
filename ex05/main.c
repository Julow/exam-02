/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:10:58 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:38:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"
#include <fcntl.h>
#include <unistd.h>

int				main(int argc, char **argv)
{
	int				fd;
	char			**map;

	while (argc >= 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			break ;
		map = read_island(fd);
		close(fd);
		if (check_island(map) != 0)
			break ;
		if (count_island(map) > 10)
			break ;
		print_island(map);
		return (0);
	}
	write(1, "\n", 1);
	return (1);
}
