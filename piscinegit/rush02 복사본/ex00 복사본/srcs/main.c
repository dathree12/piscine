/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 14:20:57 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 17:22:17 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int			g_dict_file_error;
int			g_input_num_error;
int			g_end_of_file;
t_list		*g_dict_begin;
char		*g_input_num;
char		*g_dict_line;
int			g_first_num;

void		g_val_init(void)
{
	g_dict_file_error = 0;
	g_input_num_error = 0;
	g_end_of_file = 1;
	g_first_num = 0;
}

int			main(int argc, char *argv[])
{
	g_val_init();
	if (argc > 3)
	{
		ft_putstr("Check Argument Num\n");
		return (0);
	}
	rush02(argc, argv);
	return (0);
}
