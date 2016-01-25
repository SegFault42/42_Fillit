/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_un_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 15:38:55 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/08 15:40:01 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_six(int *coord)
{
	if (coord[1] == 11 && coord[2] == 16 && coord[3] == 17)
		return (L1);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 11)
		return (L2);
	if (coord[1] == 7 && coord[2] == 12 && coord[3] == 17)
		return (L3);
	if (coord[1] == 7 && coord[2] == 11 && coord[3] == 12)
		return (O);
	if (coord[1] == 7 && coord[2] == 10 && coord[3] == 11)
		return (S1);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 17)
		return (S2);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 15)
		return (Z1);
	if (coord[1] == 7 && coord[2] == 12 && coord[3] == 13)
		return (Z2);
	return (0);
}

int	check_six_1(int *coord)
{
	if (coord[1] == 11 && coord[2] == 15 && coord[3] == 16)
		return (J1);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 13)
		return (J2);
	if (coord[1] == 7 && coord[2] == 11 && coord[3] == 16)
		return (J3);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 13)
		return (J4);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 12)
		return (T1);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 16)
		return (T2);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 12)
		return (T3);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 16)
		return (T4);
	return (0);
}

int	check_sept(int *coord)
{
	if (coord[1] == 12 && coord[2] == 16 && coord[3] == 17)
		return (J1);
	if (coord[1] == 8 && coord[2] == 12 && coord[3] == 17)
		return (J3);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 17)
		return (T2);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 13)
		return (T3);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 17)
		return (T4);
	if (coord[1] == 12 && coord[2] == 17 && coord[3] == 18)
		return (L1);
	return (0);
}

int	check_sept_1(int *coord)
{
	if (coord[1] == 8 && coord[2] == 13 && coord[3] == 18)
		return (L3);
	if (coord[1] == 10 && coord[2] == 11 && coord[3] == 12)
		return (L4);
	if (coord[1] == 8 && coord[2] == 12 && coord[3] == 13)
		return (O);
	if (coord[1] == 8 && coord[2] == 11 && coord[3] == 12)
		return (S1);
	if (coord[1] == 12 && coord[2] == 13 && coord[3] == 18)
		return (S2);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 16)
		return (Z1);
	return (0);
}

int	check_dix(int *coord)
{
	if (coord[1] == 15 && coord[2] == 16 && coord[3] == 17)
		return (J2);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 17)
		return (J4);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 16)
		return (T1);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 15)
		return (L2);
	if (coord[1] == 11 && coord[2] == 15 && coord[3] == 16)
		return (O);
	if (coord[1] == 11 && coord[2] == 12 && coord[3] == 13)
		return (I2);
	if (coord[1] == 11 && coord[2] == 16 && coord[3] == 17)
		return (Z2);
	return (0);
}
