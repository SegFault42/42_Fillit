/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/02 13:34:31 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/14 15:22:57 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	check_index(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[4] == '\n' && str[9] == '\n' & str[14] == '\n' \
				&& str[19] == '\n' && str[20] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	check_lastindex(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[4] == '\n' && str[9] == '\n' & str[14] == '\n' \
				&& str[19] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	check_index2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

int	check_index3(char *str)
{
	int i;
	int count_diese;

	i = 0;
	count_diese = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#')
			count_diese++;
		i++;
	}
	if (count_diese != 4)
		return (0);
	return (1);
}

int	check_index4(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i != 21)
		return (0);
	return (1);
}
