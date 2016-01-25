/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_un_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:38:46 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/08 15:38:47 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_onze(int *coord)
{
	if (coord[1] == 16 && coord[2] == 17 && coord[3] == 18)
		return (J2);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 18)
		return (J4);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 17)
		return (T1);
	if (coord[1] == 15 && coord[2] == 16 && coord[3] == 17)
		return (T3);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 16)
		return (L2);
	if (coord[1] == 12 && coord[2] == 16 && coord[3] == 17)
		return (O);
	if (coord[1] == 12 && coord[2] == 15 && coord[3] == 16)
		return (S1);
	if (coord[1] == 12 && coord[2] == 17 && coord[3] == 18)
		return (Z2);
	return (0);
}

int	check_douze(int *coord)
{
	if (coord[1] == 16 && coord[2] == 17 && coord[3] == 18)
		return (T3);
	if (coord[1] == 15 && coord[2] == 16 && coord[3] == 17)
		return (L4);
	if (coord[1] == 13 && coord[2] == 17 && coord[3] == 18)
		return (O);
	if (coord[1] == 13 && coord[2] == 16 && coord[3] == 17)
		return (S1);
	return (0);
}
