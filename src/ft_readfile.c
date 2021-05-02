/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdutenke <rdutenke@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:49:24 by rdutenke          #+#    #+#             */
/*   Updated: 2021/04/18 20:00:09 by rdutenke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/header.h"

static	void	ft_int(t_config *config, t_par19 *p)
{
	config->c_cameras = NULL;
	config->l_lights = NULL;
	config->o_objects = NULL;
	config->c_canvas = NULL;
	config->img = NULL;
	config->img_init = NULL;
	p->line = NULL;
}

static	bool	ft_aux(char *line, t_config *config)
{
	if (line != NULL && *line != '\0')
	{
		if (!is_valid(line))
			return (false);
		ft_conf(&config, line);
		free(line);
	}
	return (true);
}

bool	ft_readfile(t_config *config, char *argv[])
{
	t_par19	p;

	ft_int(config, &p);
	p.fd = open(argv[1], O_RDONLY);
	if (!p.fd)
	{
		ft_printf("aa");
		ft_printf("%s\n", ft_error("000"));
		exit(0);
	}
	p.ii = get_next_line(p.fd, &p.line);
	while (p.ii > 0)
	{
		if (p.line != NULL && *p.line != '\0' && *p.line != '#')
		{
			if (!is_valid(p.line))
				return (false);
			ft_conf(&config, p.line);
			free(p.line);
		}
		p.ii = get_next_line(p.fd, &p.line);
	}
	if (!ft_aux(p.line, config))
		return (false);
	return (true);
}
