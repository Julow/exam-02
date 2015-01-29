/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 10:26:40 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 11:25:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "island.h"
#include <stdlib.h>

int				ft_strlen(const char *str)
{
	int				i;

	if (str == NULL)
		return (0);
	i = -1;
	while (str[++i] != '\0')
		;
	return (i);
}

void			ft_strcpy(char *dst, const char *src)
{
	while (*src != '\0')
		*(dst++) = *(src++);
	*dst = '\0';
}

void			ft_strlcpy(char *dst, const char *src, int len)
{
	while (len-- > 0)
		*(dst++) = *(src++);
	*dst = '\0';
}

char			*ft_strldup(const char *src, int len)
{
	char			*dup;

	dup = (char*)malloc(len + 1);
	ft_strlcpy(dup, src, len);
	return (dup);
}

void			str_add(char **str, char *add, int len)
{
	char			*tmp;

	if (*str == NULL)
		*str = ft_strldup(add, len);
	else
	{
		tmp = (char*)malloc(ft_strlen(*str) + len + 1);
		ft_strcpy(tmp, *str);
		ft_strlcpy(tmp + ft_strlen(*str), add, len);
		*str = tmp;
	}
}
