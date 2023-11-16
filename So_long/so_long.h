/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niotzenb <niotzenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:54:27 by niotzenb          #+#    #+#             */
/*   Updated: 2023/11/16 11:33:49 by niotzenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <math.h>
# include <stdlib.h>
# include "minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <stdio.h>

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*textures[5];
}	t_data;

#endif