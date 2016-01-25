/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:35:20 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/19 16:26:27 by jeexpert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

short		ft_write_minos(int x, t_list *list, char **t)
{
	int		y;
	char	chr;

	chr = x / 100000;
	y = (x / 100) % 100;
	x = x % 100;
	if (t[x + ((int *)list->content)[0]][y + ((int *)list->content)[1]] != '.')
		return (-1);
	if (t[x + ((int *)list->content)[2]][y + ((int *)list->content)[3]] != '.')
		return (-1);
	if (t[x + ((int *)list->content)[4]][y + ((int *)list->content)[5]] != '.')
		return (-1);
	if (t[x + ((int *)list->content)[6]][y + ((int *)list->content)[7]] != '.')
		return (-1);
	t[x + ((int *)list->content)[0]][y + ((int *)list->content)[1]] = chr;
	t[x + ((int *)list->content)[2]][y + ((int *)list->content)[3]] = chr;
	t[x + ((int *)list->content)[4]][y + ((int *)list->content)[5]] = chr;
	t[x + ((int *)list->content)[6]][y + ((int *)list->content)[7]] = chr;
	return (0);
}

short		ft_backtracking(char chr, int size, t_list *list, char **tab)
{
	int		x;
	int		y;

	y = 0;
	if (!list)
		return (0);
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			if (!ft_check_write((x * 100) + y, list, size) &&
					!ft_write_minos((chr * 100000) + (x * 100) + y, list, tab))
				if (!ft_backtracking(chr + 1, size, list->next, tab))
					return (0);
			ft_free_chr(tab, chr);
			x++;
		}
		y++;
	}
	return (-1);
}

void		ft_resolve(t_list *list)
{
	int		size;
	void	*ptr;

	size = 2;
	if (!(ptr = creat_tab(size)))
		exit(1);
	while (ft_backtracking('A', size, list, ptr))
	{
		size++;
		free_tab(ptr);
		if (!(ptr = creat_tab(size)))
			exit(1);
	}
	ft_print_tab(ptr);
	free_tab(ptr);
}

void		free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void		ft_print_tab(char **tab)
{
	while (*tab)
		ft_putendl(*tab++);
}
