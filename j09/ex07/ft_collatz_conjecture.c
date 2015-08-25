/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/14 07:33:33 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/14 08:17:33 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base % 2 == 0)
		return (ft_collatz_conjecture / 2);
	else
	{
		base = base * 3 + 1;
		return (1 + ft_collatz_conjecture);
	}
	return (0);
}
