/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 14:54:18 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 15:40:43 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	set_dictionary(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		g_dict_file_error = 1;
		return ;
	}
	while ((g_dict_line = file_read(fd)))
	{
		if (g_end_of_file++)
			break ;
		if (!*g_dict_line)
			continue;
		if (!check_key_value(g_dict_line))
		{
			free(g_dict_line);
			break ;
		}
		cut_and_push(g_dict_line);
		free(g_dict_line);
	}
	close(fd);
	return ;
}

void	cut_and_push(char *str)
{
	char	*key;
	char	*value;
	int		col_index;

	col_index = 0;
	while (str[col_index] != ':')
		col_index++;
	key = cut_key(str, col_index);
	value = cut_value(str, col_index);
	push_front(key, value);
}
