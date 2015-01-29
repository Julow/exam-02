/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   island.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:11:27 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:50:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISLAND_H
# define ISLAND_H

# include <stddef.h>

# define BUFF_SIZE		512

# define MAX_LINE_LEN	1024

/*
** utils.c
*/
int				ft_strlen(const char *str);
void			ft_strcpy(char *dst, const char *src);
void			ft_strlcpy(char *dst, const char *src, int len);
char			*ft_strldup(const char *dst, int len);
void			str_add(char **str, char *add, int len);

/*
** reader.c
*/
char			**read_island(int fd);

/*
** checker.c
*/
int				check_island(char **map);

/*
** counter.c
*/
int				count_island(char **map);

/*
** printer.c
*/
void			print_island(char **map);

#endif
