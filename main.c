/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:06:48 by pthiruma          #+#    #+#             */
/*   Updated: 2023/10/24 08:49:06 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char *ext;
/* argument check */
	if (argc != 2)
		ft_error(ERR_ARG);
/* extension check */
	ext = ft_strchr(argv[1], '.');
	if (!ext || ft_strncmp(ext, ".ber", 4) != 0 || ext[4])
		ft_error(ERR_EXT);
/* read freakin map */
//	ft_read_map();
/* parse freakin map */
// ft_parse_map();
/* mlx that shawdy */
/* print bombass message */
	ft_printf("you are a freaking awesome coder\n");
}