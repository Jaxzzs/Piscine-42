/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabordas <mabordas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 21:10:28 by mabordas          #+#    #+#             */
/*   Updated: 2015/08/19 22:49:33 by mabordas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;
	t_list *newelem;

	list = *begin_list;
	newelem = ft_create_elem(data);
	if (list != NULL)
	{
		newelem->next = list;
		*begin_list = newelem;
	}
	else
		list = ft_create_elem(data);
}
