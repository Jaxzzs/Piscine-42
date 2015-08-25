/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/06 14:39:46 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/07 23:33:41 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char revalphabet;

	revalphabet = 'z';
	while (revalphabet >= 'a')
	{
		ft_putchar(revalphabet);
		revalphabet--;
	}
	ft_putchar('\n');
}
