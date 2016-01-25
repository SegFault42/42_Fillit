/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caclul_coordonee.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 10:37:37 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/18 22:01:35 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*calcul_coordonee(char *str)
{
	int i;
	int j;
	int *tab;

	tab = NULL;
	if (str)
	{
		tab = (int *)malloc(sizeof(int) * 4);
		i = 0;
		j = 0;
		while (str[i] != '\0')
		{
			if (str[i] == '#')
			{
				tab[j] = i;
				j++;
			}
			i++;
		}
	}
	return (tab);
}
