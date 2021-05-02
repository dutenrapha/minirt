/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   negate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 01:22:48 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/18 01:23:02 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

t_tuple	negate(t_tuple v1)
{
	t_tuple	v2;

	v2.x = 0 - v1.x;
	v2.y = 0 - v1.y;
	v2.z = 0 - v1.z;
	v2.w = 0 - v1.w;
	return (v2);
}
