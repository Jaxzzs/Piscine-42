/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 18:22:35 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/19 22:50:52 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (list != NULL)
	{
		while (list->next != NULL)
			list = list->next;
		list->next = ft_create_elem(data);
	}
	else
		list = ft_create_elem(data);
}
