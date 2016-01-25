/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_coord_l.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:40:13 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/18 19:48:03 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*assigne_coord_l1(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 9)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 0;
		tetris[2] = 1;
		tetris[5] = 0;
		tetris[4] = 2;
		tetris[7] = 1;
		tetris[6] = 2;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_l2(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 10)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 1;
		tetris[2] = 0;
		tetris[5] = 2;
		tetris[4] = 0;
		tetris[7] = 0;
		tetris[6] = 1;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_l3(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 11)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 1;
		tetris[2] = 0;
		tetris[5] = 1;
		tetris[4] = 1;
		tetris[7] = 1;
		tetris[6] = 2;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_l4(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 12)
	{
		tetris[1] = 2;
		tetris[0] = 0;
		tetris[3] = 0;
		tetris[2] = 1;
		tetris[5] = 1;
		tetris[4] = 1;
		tetris[7] = 2;
		tetris[6] = 1;
		return (tetris);
	}
	return (NULL);
}
