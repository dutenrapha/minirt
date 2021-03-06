/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 03:01:04 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/17 03:02:08 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

t_intersection	hit(t_list *xs)
{
	t_intersection	it;
	int				i;
	int				lenght;
	t_list			*temp;

	i = 0;
	temp = xs;
	lenght = ft_lstsize(xs);
	it.valid = false;
	bubblesort(&xs);
	while (i < lenght)
	{
		if (temp->content.t > 0)
		{
			it.t = temp->content.t;
			it.object = temp->content.object;
			it.valid = true;
			break ;
		}
		temp = temp->next;
		i++;
	}
	return (it);
}
