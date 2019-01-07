/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:56:52 by agaulet           #+#    #+#             */
/*   Updated: 2016/12/09 13:39:13 by agaulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmp_0(int *tab)
{
	int v1[4];
	int v2[4];
	int i;

	v2[0] = 1;
	v2[1] = 5;
	v2[2] = 9;
	v2[3] = 13;
	v1[0] = 1;
	v1[1] = 2;
	v1[2] = 3;
	v1[3] = 4;
	i = 0;
	while (tab[i] == v1[i] && i != 4)
		i++;
	if (i == 4)
		return (1);
	i = 0;
	while (tab[i] == v2[i] && i != 4)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
