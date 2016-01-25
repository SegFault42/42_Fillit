/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_coord.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:40:13 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/14 12:09:10 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*stock_coord_1(int n)
{
	int	*tetris;

	tetris = NULL;
	if (n == 1)
		tetris = assigne_coord_j1(n);
	else if (n == 2)
		tetris = assigne_coord_j2(n);
	else if (n == 3)
		tetris = assigne_coord_j3(n);
	else if (n == 4)
		tetris = assigne_coord_j4(n);
	else if (n == 5)
		tetris = assigne_coord_t1(n);
	else if (n == 6)
		tetris = assigne_coord_t2(n);
	else if (n == 7)
		tetris = assigne_coord_t3(n);
	else if (n == 8)
		tetris = assigne_coord_t4(n);
	else if (n == 9)
		tetris = assigne_coord_l1(n);
	else if (n == 10)
		tetris = assigne_coord_l2(n);
	return (tetris);
}

int	*stock_coord_2(int n)
{
	int	*tetris;

	tetris = NULL;
	if (n == 11)
		tetris = assigne_coord_l3(n);
	if (n == 12)
		tetris = assigne_coord_l4(n);
	if (n == 13)
		tetris = assigne_coord_o(n);
	if (n == 14)
		tetris = assigne_coord_i1(n);
	if (n == 15)
		tetris = assigne_coord_i2(n);
	if (n == 16)
		tetris = assigne_coord_s1(n);
	if (n == 17)
		tetris = assigne_coord_s2(n);
	if (n == 18)
		tetris = assigne_coord_z1(n);
	if (n == 19)
		tetris = assigne_coord_z2(n);
	return (tetris);
}
