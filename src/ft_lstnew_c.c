/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 01:01:16 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/17 01:01:20 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

t_cameras	*ft_lstnew_c(t_camera content)
{
	t_cameras	*new;

	new = (t_cameras *)malloc(sizeof(t_cameras));
	if (!new)
		return (NULL);
	if (new)
		new->content = content;
	new->next = NULL;
	return (new);
}
