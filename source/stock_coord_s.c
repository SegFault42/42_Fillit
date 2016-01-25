/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_coord_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 12:40:13 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/18 19:48:23 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	*assigne_coord_s1(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 16)
	{
		tetris[1] = 1;
		tetris[0] = 0;
		tetris[3] = 2;
		tetris[2] = 0;
		tetris[5] = 0;
		tetris[4] = 1;
		tetris[7] = 1;
		tetris[6] = 1;
		return (tetris);
	}
	return (NULL);
}

int	*assigne_coord_s2(int n)
{
	int	*tetris;

	if (!(tetris = (int *)malloc(sizeof(int) * 8)))
		return (NULL);
	if (n == 17)
	{
		tetris[1] = 0;
		tetris[0] = 0;
		tetris[3] = 0;
		tetris[2] = 1;
		tetris[5] = 1;
		tetris[4] = 1;
		tetris[7] = 1;
		tetris[6] = 2;
		return (tetris);
	}
	return (NULL);
}
