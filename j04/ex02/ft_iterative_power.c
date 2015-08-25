/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteratve_power.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/10 19:39:02 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/11 22:22:17 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int osef;

	osef = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 1)
	{
		return (nb);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		osef = nb * osef;
		power--;
	}
	return (osef);
}
