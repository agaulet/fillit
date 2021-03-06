/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:58:22 by agaulet           #+#    #+#             */
/*   Updated: 2016/12/09 13:32:08 by agaulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmp_4(int *tab)
{
	int v1[4];
	int i;
	int b;

	v1[0] = 1;
	v1[1] = 4;
	v1[2] = 5;
	v1[3] = 6;
	i = 0;
	b = 0;
	while (tab[i] == v1[i] && i != 4)
		i++;
	if (i == 4)
	{
		while (b != 4)
			tab[b++] += 1;
		return (1);
	}
	return (0);
}
