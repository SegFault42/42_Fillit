/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_un_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:42:00 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/09 10:10:10 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_deux(int *coord)
{
	if (coord[1] == 7 && coord[2] == 11 && coord[3] == 12)
		return (J1);
	if (coord[1] == 3 && coord[2] == 7 && coord[3] == 12)
		return (J3);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 12)
		return (T2);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 8)
		return (T3);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 12)
		return (T4);
	if (coord[1] == 7 && coord[2] == 12 && coord[3] == 13)
		return (L1);
	if (coord[1] == 3 && coord[2] == 8 && coord[3] == 13)
		return (L3);
	return (0);
}

int	check_deux_1(int *coord)
{
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 7)
		return (L4);
	if (coord[1] == 3 && coord[2] == 7 && coord[3] == 8)
		return (O);
	if (coord[1] == 7 && coord[2] == 12 && coord[3] == 17)
		return (I1);
	if (coord[1] == 3 && coord[2] == 6 && coord[3] == 7)
		return (S1);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 13)
		return (S2);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 11)
		return (Z1);
	return (0);
}

int	check_cinq(int *coord)
{
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 12)
		return (J2);
	if (coord[1] == 6 && coord[2] == 10 && coord[3] == 15)
		return (J3);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 12)
		return (J4);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 11)
		return (T1);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 15)
		return (T4);
	if (coord[1] == 10 && coord[2] == 15 && coord[3] == 16)
		return (L1);
	return (0);
}

int	check_cinq_1(int *coord)
{
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 10)
		return (L2);
	if (coord[1] == 6 && coord[2] == 11 && coord[3] == 16)
		return (L3);
	if (coord[1] == 6 && coord[2] == 10 && coord[3] == 11)
		return (O);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 8)
		return (I2);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 16)
		return (S2);
	if (coord[1] == 6 && coord[2] == 11 && coord[3] == 12)
		return (Z2);
	return (0);
}

int	check_huit(int *coord)
{
	if (coord[1] == 13 && coord[2] == 17 && coord[3] == 18)
		return (J1);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 18)
		return (T2);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 13)
		return (L4);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 17)
		return (Z1);
	return (0);
}
