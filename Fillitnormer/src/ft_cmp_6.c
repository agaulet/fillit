/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_6.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 18:58:37 by agaulet           #+#    #+#             */
/*   Updated: 2016/12/09 14:06:56 by agaulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_cmp_6(int *tab)
{
	int v1[4];
	int i;

	v1[0] = 1;
	v1[1] = 2;
	v1[2] = 3;
	v1[3] = 5;
	i = 0;
	while (tab[i] == v1[i] && i != 4)
		i++;
	if (i == 4)
		return (1);
	return (0);
}