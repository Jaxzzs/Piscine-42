/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/13 18:04:15 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/13 20:02:20 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int base;

	base = hour % 12;
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 13.00 P.M.\n");
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 22.00 P.M. AND 01.00 A.M."\n);
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 10.00 A.M. AND 12.00 P.M."\n);
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 24.00 P.M. AND 01.00 A.M."\n);
	if (hour > 12 && hour < 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d P.M. AND %d P.M.\n", base, 
				base + 1);
	if (hour < 12 && hour > 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d A.M. AND %d A.M.\n", base, 
				base + 1);
}
