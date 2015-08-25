/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 23:14:17 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/20 11:12:38 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = *begin_list;
	if (list != NULL)
	{
		while (list->next != NULL)
		{
			list = list->next;
		}
	}
	return (list);
}
