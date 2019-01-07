/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_15.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 19:01:14 by agaulet           #+#    #+#             */
/*   Updated: 2016/11/21 12:13:12 by agaulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmp_15(int *tab)
{
	int v1[4];
	int i;

	v1[0] = 1;
	v1[1] = 5;
	v1[2] = 6;
	v1[3] = 10;
	i = 0;
	while (tab[i] == v1[i] && i != 4)
		i++;
	if (i == 4)
		return (1);
	return (0);
}
