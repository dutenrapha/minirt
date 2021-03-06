/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_axis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:15:11 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/19 00:17:51 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

void	check_axis(float origin, float d, float *tmin, float *tmax)
{
	float	tmin_numerator;
	float	tmax_numerator;
	float	temp;

	tmin_numerator = (-1 - origin);
	tmax_numerator = (1 - origin);
	if (fabs(d) >= EPSILON)
	{
		*tmin = tmin_numerator / d;
		*tmax = tmax_numerator / d;
	}
	else
	{
		*tmin = tmin_numerator * INFINITY;
		*tmax = tmax_numerator * INFINITY;
	}
	if (*tmin > *tmax)
	{
		temp = *tmin;
		*tmin = *tmax;
		*tmax = temp;
	}
}
