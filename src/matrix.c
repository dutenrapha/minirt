/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 00:02:30 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/18 00:02:53 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

t_matrix	matrix(int dim)
{
	t_matrix	m;
	int			i;

	m.dim = dim;
	m.element = (float **)malloc(sizeof(float *) * dim);
	i = 0;
	while (i < dim)
	{
		m.element[i] = (float *)malloc(sizeof(float) * dim);
		i++;
	}
	return (m);
}
