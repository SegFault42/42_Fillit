/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 11:19:15 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/19 16:28:08 by jeexpert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/fillit.h"

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 2)
	{
		if (!(check_last_rc(argv[1])))
		{
			ft_putendl("error");
			return (0);
		}
		if ((list = ft_openfile(argv[1])))
		{
			ft_resolve(list);
			free_list(list);
		}
		else
			ft_putendl("error");
	}
	else
		ft_putendl("error");
	return (0);
}
