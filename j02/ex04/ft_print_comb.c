/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/07 12:26:46 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/07 23:35:26 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char unite;
	char dizaine;
	char centaine;

	centaine = '0';
	dizaine = '0';
	unite = '0';
	while (centaine <= '9')
	{
		dizaine = centaine + 1;
		while (dizaine <= '9')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				ft_putchar(centaine);
				ft_putchar(dizaine);
				ft_putchar(unite);
				unite++;
			}
			dizaine++;
		}
		centaine++;
	}
}
