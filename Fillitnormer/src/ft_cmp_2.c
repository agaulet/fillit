/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:57:52 by agaulet           #+#    #+#             */
/*   Updated: 2016/12/09 14:06:23 by agaulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmp_2(int *tab)
{
	int v1[4];
	int i;

	v1[0] = 1;
	v1[1] = 5;
	v1[2] = 6;
	v1[3] = 9;
	i = 0;
	while (tab[i] == v1[i] && i != 4)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
