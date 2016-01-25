/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_openfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:35:20 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/19 17:09:37 by jeexpert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

t_list		*stock_in_list(char *buf, t_list *temp, int ret)
{
	int		tetris;
	int		*tab;
	int		*piece;

	piece = NULL;
	if ((check_index(buf) && check_index2(buf) && check_index3(buf) &&\
		check_index4(buf) && ret == 21) || (ret == 20 && check_lastindex(buf)\
		&& check_index3(buf) && check_index2(buf) && check_lastindex4(buf)))
	{
		tab = calcul_coordonee(buf);
		tetris = check_tetriminos(tab);
		free(tab);
		if (tetris >= 1 && tetris <= 10)
			piece = stock_coord_1(tetris);
		else if (tetris >= 11 && tetris <= 19)
			piece = stock_coord_2(tetris);
		if (piece)
		{
			temp->next = ft_lstnew(piece, sizeof(int) * 8);
			temp = temp->next;
			free(piece);
			return (temp);
		}
	}
	return (NULL);
}

t_list		*creat_first_maillon(char *buf, int ret)
{
	int		*tab;
	int		tetris;
	t_list	*list;
	int		*piece;

	piece = NULL;
	if ((check_index(buf) && check_index2(buf) && check_index3(buf) &&\
		check_index4(buf) && ret == 21) || (ret == 20 && check_lastindex(buf)\
		&& check_index3(buf) && check_index2(buf) && check_lastindex4(buf)))
	{
		tab = calcul_coordonee(buf);
		tetris = check_tetriminos(tab);
		free(tab);
		if (tetris >= 1 && tetris <= 10)
			piece = stock_coord_1(tetris);
		else if (tetris >= 11 && tetris <= 19)
			piece = stock_coord_2(tetris);
		if (piece)
		{
			list = ft_lstnew(piece, sizeof(int) * 8);
			free(piece);
			return (list);
		}
	}
	return (NULL);
}

t_list		*ft_openfile(char *argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];
	t_list	*temp;
	t_list	*list;

	list = NULL;
	if ((fd = open(argv, O_RDWR)) != -1)
	{
		if ((ret = read(fd, buf, 21)))
			if (*buf)
				buf[ret] = '\0';
		if (!(list = creat_first_maillon(buf, ret)))
			return (NULL);
		temp = list;
		while ((ret = read(fd, buf, 21)))
			if (*buf)
			{
				buf[ret] = '\0';
				if (!(temp = stock_in_list(buf, temp, ret)))
					return (NULL);
			}
		close(fd);
	}
	return (list);
}

void		ft_free_chr(char **tab, char chr)
{
	int		i;

	while (*tab)
	{
		i = 0;
		while (tab[0][i])
		{
			if (tab[0][i] == chr)
				tab[0][i] = '.';
			i++;
		}
		tab++;
	}
}

short		ft_check_write(int x, t_list *list, int size)
{
	int		y;

	y = (x / 100);
	x = x % 100;
	if (y + ((int *)list->content)[1] >= size ||
	(x + ((int *)list->content)[0]) >= size)
		return (-1);
	if (((y + ((int *)list->content)[3]) >= size) ||
	((x + ((int *)list->content)[2]) >= size))
		return (-2);
	if (((y + ((int *)list->content)[5]) >= size) ||
	((x + ((int *)list->content)[6]) >= size))
		return (-3);
	if (((y + ((int *)list->content)[7]) >= size) ||
	((x + ((int *)list->content)[6]) >= size))
		return (-4);
	return (0);
}
