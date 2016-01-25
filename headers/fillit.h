/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabougue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 10:07:31 by rabougue          #+#    #+#             */
/*   Updated: 2016/01/20 17:30:14 by rabougue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define J1 1
# define J2 2
# define J3 3
# define J4 4
# define T1 5
# define T2 6
# define T3 7
# define T4 8
# define L1 9
# define L2 10
# define L3 11
# define L4 12
# define O 13
# define I1 14
# define I2 15
# define S1 16
# define S2 17
# define Z1 18
# define Z2 19
# define BUF_SIZE 22

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../headers/libft.h"

typedef struct s_pos	t_pos;

int			check_zero(int *coord);
int			check_zero_1(int *coord);
int			check_un(int *coord);
int			check_un_1(int *coord);
int			check_deux(int *coord);
int			check_deux_1(int *coord);
int			check_trois(int *coord);
int			check_cinq(int *coord);
int			check_cinq_1(int *coord);
int			check_six(int *coord);
int			check_six_1(int *coord);
int			check_sept(int *coord);
int			check_sept_1(int *coord);
int			check_huit(int *coord);
int			check_dix(int *coord);
int			check_onze(int *coord);
int			check_douze(int *coord);
int			check_cinqahuit(int *coord);
int			check_zeroatroi(int *coord);
int			check_dixaquinze(int *coord);
int			check_tetriminos(int *coord);
int			*calcul_coordonee(char *str);
int			check_index(char *str);
int			check_index2(char *str);
int			check_index3(char *str);
int			check_index4(char *str);
int			check_lastindex(char *str);
int			check_lastindex4(char *str);
t_list		*ft_openfile(char *argv);
t_list		*ft_stocklist(char *arv);
int			*assigne_coord_j1(int n);
int			*assigne_coord_j2(int n);
int			*assigne_coord_j3(int n);
int			*assigne_coord_j4(int n);
int			*assigne_coord_t1(int n);
int			*assigne_coord_t2(int n);
int			*assigne_coord_t3(int n);
int			*assigne_coord_t4(int n);
int			*assigne_coord_l1(int n);
int			*assigne_coord_l2(int n);
int			*assigne_coord_l3(int n);
int			*assigne_coord_l4(int n);
int			*assigne_coord_o(int n);
int			*assigne_coord_i1(int n);
int			*assigne_coord_i2(int n);
int			*assigne_coord_s1(int n);
int			*assigne_coord_s2(int n);
int			*assigne_coord_z1(int n);
int			*assigne_coord_z2(int n);
int			*stock_coord_1(int n);
int			*stock_coord_2(int n);
void		ft_resolve(t_list *list);
short		ft_write_minos(int x, t_list *list, char **tab);
void		ft_print_tab(char **tab);
char		**creat_tab(int size);
void		ft_free_chr(char **tab, char chr);
int			check_last_rc(char *argv);
short		ft_check_write(int x, t_list *list, int size);
void		free_tab(char **tab);
void		free_list(t_list *list);
t_list		*create_first_maillon(char *buf, int ret);

#endif
