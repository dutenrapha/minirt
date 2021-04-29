/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_sp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 02:52:40 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/17 02:55:07 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

static bool	ft_axu(char **line_t)
{
	if (ft_str_dlen(line_t) != 4)
	{
		ft_printf("Error\nUma esfera deve conter extamente 4 parametros:");
		ft_printf(" o identificador sp, as coordenas da posicao x,y,z, o ");
		ft_printf("diametro e sua cor\n");
		return (false);
	}
	return (true);
}

bool		ft_validate_sp(char **line_t)
{
	if (ft_axu(line_t) == false)
		return (false);
	if (!is_coordenada(line_t[1]))
	{
		ft_printf("Error\nDigite uma coordenada valida para a esfera\n");
		return (false);
	}
	if (!is_num(line_t[2]))
	{
		ft_printf("Error\nO diametro da esfera deve ser um numero\n");
		return (false);
	}
	if (ft_atof(line_t[2]) < 0)
	{
		ft_printf("Error\nO diametro da esfera deve ser um valor positivo\n");
		return (false);
	}
	if (!is_color(line_t[3]))
	{
		ft_printf("Error\nDigite uma cor valida para a esfera\n");
		return (false);
	}
	return (true);
}
