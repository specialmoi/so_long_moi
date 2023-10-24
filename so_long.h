/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthiruma <pthiruma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 07:48:52 by pthiruma          #+#    #+#             */
/*   Updated: 2023/10/24 08:53:04 by pthiruma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "./libft/libft.h"

#define ERR_ARG "Invalid number of arguments -> needs to be two (./so_long map.ber)\n"
#define ERR_EXT "Invalid extension"


/* typedef struct s_map
{
	char **map;
	int width;
	int height;
	
} t_map; */

int	ft_error(char *s);

