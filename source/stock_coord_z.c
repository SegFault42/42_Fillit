/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_coord_t.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:40:13 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/18 19:48:43 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*assigne_coord_z1(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 18)
	{
		tetris[1] = 1;
		tetris[0] = 0;
		tetris[3] = 0;
		tetris[2] = 1;
		tetris[5] = 1;
		tetris[4] = 1;
		tetris[7] = 0;
		tetris[6] = 2;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_z2(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 19)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 1;
		tetris[2] = 0;
		tetris[5] = 1;
		tetris[4] = 1;
		tetris[7] = 2;
		tetris[6] = 1;
		return (tetris);
	}
	return (NULL);
}
