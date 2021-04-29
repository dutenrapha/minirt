/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magnitude.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 23:59:12 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/17 23:59:47 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

float	magnitude(t_tuple v1)
{
	return (sqrt(v1.x * v1.x + v1.y * v1.y + v1.z * v1.z + v1.w * v1.w));
}