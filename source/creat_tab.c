/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeexpert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/19 16:55:28 by jeexpert          #+#    #+#             */
/*   Updated: 2016/01/19 16:55:30 by jeexpert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

char	**creat_tab(int size)
{
	char	**tab;
	int		i;
	int		j;

	tab = NULL;
	if (size > 0)
		if ((tab = (char **)malloc(sizeof(char *) * (size + 1))))
		{
			i = 0;
			while (i < size)
			{
				if (!(tab[i] = (char *)malloc(sizeof(char) * (size + 1))))
					return (NULL);
				j = 0;
				while (j < size)
				{
					tab[i][j] = '.';
					j++;
				}
				tab[i][j] = '\0';
				i++;
			}
			tab[i] = NULL;
		}
	return (tab);
}

void	free_list(t_list *list)
{
	t_list *tmp;

	if (list)
	{
		while (list)
		{
			tmp = list->next;
			free(list->content);
			free(list);
			list = tmp;
		}
		free(list);
	}
}
