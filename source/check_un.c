/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_un.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 21:17:26 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/09 10:09:20 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_zero(int *coord)
{
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 7)
		return (J2);
	if (coord[1] == 1 && coord[2] == 5 && coord[3] == 10)
		return (J3);
	if (coord[1] == 1 && coord[2] == 2 && coord[3] == 7)
		return (J4);
	if (coord[1] == 1 && coord[2] == 2 && coord[3] == 6)
		return (T1);
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 10)
		return (T4);
	if (coord[1] == 5 && coord[2] == 10 && coord[3] == 11)
		return (L1);
	return (0);
}

int	check_zero_1(int *coord)
{
	if (coord[1] == 1 && coord[2] == 2 && coord[3] == 5)
		return (L2);
	if (coord[1] == 1 && coord[2] == 6 && coord[3] == 11)
		return (L3);
	if (coord[1] == 1 && coord[2] == 5 && coord[3] == 6)
		return (O);
	if (coord[1] == 5 && coord[2] == 10 && coord[3] == 15)
		return (I1);
	if (coord[1] == 1 && coord[2] == 2 && coord[3] == 3)
		return (I2);
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 11)
		return (S2);
	if (coord[1] == 1 && coord[2] == 6 && coord[3] == 7)
		return (Z2);
	return (0);
}

int	check_un(int *coord)
{
	if (coord[1] == 6 && coord[2] == 10 && coord[3] == 11)
		return (J1);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 8)
		return (J2);
	if (coord[1] == 2 && coord[2] == 6 && coord[3] == 11)
		return (J3);
	if (coord[1] == 2 && coord[2] == 3 && coord[3] == 8)
		return (J4);
	if (coord[1] == 2 && coord[2] == 3 && coord[3] == 7)
		return (T1);
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 11)
		return (T2);
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 7)
		return (T3);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 11)
		return (T4);
	if (coord[1] == 6 && coord[2] == 11 && coord[3] == 12)
		return (L1);
	return (0);
}

int	check_un_1(int *coord)
{
	if (coord[1] == 2 && coord[2] == 3 && coord[3] == 6)
		return (L2);
	if (coord[1] == 2 && coord[2] == 7 && coord[3] == 12)
		return (L3);
	if (coord[1] == 2 && coord[2] == 6 && coord[3] == 7)
		return (O);
	if (coord[1] == 6 && coord[2] == 11 && coord[3] == 16)
		return (I1);
	if (coord[1] == 2 && coord[2] == 5 && coord[3] == 6)
		return (S1);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 12)
		return (S2);
	if (coord[1] == 5 && coord[2] == 6 && coord[3] == 10)
		return (Z1);
	if (coord[1] == 2 && coord[2] == 7 && coord[3] == 8)
		return (Z2);
	return (0);
}

int	check_trois(int *coord)
{
	if (coord[1] == 8 && coord[2] == 12 && coord[3] == 13)
		return (J1);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 13)
		return (T2);
	if (coord[1] == 6 && coord[2] == 7 && coord[3] == 8)
		return (L4);
	if (coord[1] == 8 && coord[2] == 13 && coord[3] == 18)
		return (I1);
	if (coord[1] == 7 && coord[2] == 8 && coord[3] == 12)
		return (Z1);
	return (0);
}
