/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 09:41:42 by exam              #+#    #+#             */
/*   Updated: 2015/01/29 09:56:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	smallest;
	int				tmp;

	i = 0;
	while (i < size)
	{
		smallest = i;
		j = i;
		while (++j < size)
			if (tab[j] < tab[smallest])
				smallest = j;
		tmp = tab[i];
		tab[i] = tab[smallest];
		tab[smallest] = tmp;
		i++;
	}
}
