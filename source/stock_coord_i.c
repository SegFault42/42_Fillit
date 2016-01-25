/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_coord_i.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:40:13 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/18 19:47:45 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*assigne_coord_i1(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 14)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 0;
		tetris[2] = 1;
		tetris[5] = 0;
		tetris[4] = 2;
		tetris[7] = 0;
		tetris[6] = 3;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_i2(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 15)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 1;
		tetris[2] = 0;
		tetris[5] = 2;
		tetris[4] = 0;
		tetris[7] = 3;
		tetris[6] = 0;
		return (tetris);
	}
	return (NULL);
}
