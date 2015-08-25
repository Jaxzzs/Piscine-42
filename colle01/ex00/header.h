/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchristo <dchristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/16 18:09:13 by dchristo          #+#    #+#             */
/*   Updated: 2015/08/16 23:39:37 by dchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		arg_values(char **argv);
void	ft_putchar(char c);
void	ft_affichage(char **argv);
int		bloc_absent(char c, int x, int y, char **tab);
int		ft_bloc(char **tab);
int		line(char **argv, int i, char k);
int		column(char **argv, int j, char k);
int		bloc(char **argv, int i, int j, char k);
int		**index_tab(char **argv, int **tab);
void	sort_index_tab(int **tab);
int		backtracking(char **argv, int **tab);
int		verif_params(char **argv);
void	erreur(void);
int		nb_line(char **argv, int line);
int		nb_column(char **argv, int col);
int		nb_bloc(char **argv, int position);
int		line_and_column_different(char **str, int i, int j, int k);
int		number_of_param(char **str);
int		under_17_param(char **str);
