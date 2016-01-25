/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tetriminos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 11:36:59 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/18 22:01:00 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_zeroatroi(int *coord)
{
	int valid;

	valid = 0;
	if (coord)
	{
		if (coord[0] == 0)
		{
			if (!(valid = check_zero(coord)))
				valid = check_zero_1(coord);
		}
		else if (coord[0] == 1)
		{
			if (!(valid = check_un(coord)))
				valid = check_un_1(coord);
		}
		else if (coord[0] == 2)
		{
			if (!(valid = check_deux(coord)))
				valid = check_deux_1(coord);
		}
		else if (coord[0] == 3)
			valid = check_trois(coord);
		return (valid);
	}
	return (0);
}

int	check_cinqahuit(int *coord)
{
	int valid;

	valid = 0;
	if (coord)
	{
		if (coord[0] == 5)
		{
			if (!(valid = check_cinq(coord)))
				valid = check_cinq_1(coord);
		}
		else if (coord[0] == 6)
		{
			if (!(valid = check_six(coord)))
				valid = check_six_1(coord);
		}
		else if (coord[0] == 7)
		{
			if (!(valid = check_sept(coord)))
				valid = check_sept_1(coord);
		}
		else if (coord[0] == 8)
			valid = check_huit(coord);
		return (valid);
	}
	return (0);
}

int	check_dixaquinze(int *coord)
{
	int valid;

	valid = 0;
	if (coord)
	{
		if (coord[0] == 10)
			valid = check_dix(coord);
		else if (coord[0] == 11)
			valid = check_onze(coord);
		else if (coord[0] == 12)
			valid = check_douze(coord);
		else if (coord[0] == 13)
			return (12);
		else if (coord[0] == 15)
			return (15);
		return (valid);
	}
	return (0);
}

int	check_tetriminos(int *coord)
{
	int tetriminos;

	if (coord)
	{
		if (coord[0] == 0 || coord[0] == 1 || coord[0] == 2 || coord[0] == 3)
		{
			tetriminos = check_zeroatroi(coord);
			return (tetriminos);
		}
		else if (coord[0] == 5 || coord[0] == 6 || coord[0] == 7 || \
				coord[0] == 8)
		{
			tetriminos = check_cinqahuit(coord);
			return (tetriminos);
		}
		else if (coord[0] == 10 || coord[0] == 11 || coord[0] == 12 || \
				coord[0] == 13 || coord[0] == 15)
		{
			tetriminos = check_dixaquinze(coord);
			return (tetriminos);
		}
	}
	return (0);
}
