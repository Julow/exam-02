/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 09:12:08 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 09:16:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	int			len;
	char		*arg;

	if (argc == 2)
	{
		arg = argv[1];
		while (*arg == ' ' || *arg == '\t')
			arg++;
		len = 0;
		while (arg[len] != '\0' && arg[len] != ' ' && arg[len] != '\t')
			len++;
		write(1, arg, len);
	}
	write(1, "\n", 1);
	return (0);
}
