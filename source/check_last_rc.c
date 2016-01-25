/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_last_rc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:24:35 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/14 16:53:19 by jeexpert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int		check_last_rc(char *argv)
{
	int		fd;
	int		ret;
	int		valret;
	char	buf[BUF_SIZE];

	if ((fd = open(argv, O_RDWR)) != -1)
	{
		while ((ret = read(fd, buf, 21)))
			valret = ret;
		if (ret == 0)
			if (valret == 21)
			{
				close(fd);
				return (0);
			}
		close(fd);
	}
	return (1);
}
