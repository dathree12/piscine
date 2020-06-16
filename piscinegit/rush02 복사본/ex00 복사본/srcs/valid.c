/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 15:46:32 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 15:43:50 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		check_duplication(char *str)
{
	int		i;
	int		size;
	char	*temp_key;
	t_list	*temp_node;

	size = 0;
	i = -1;
	while (!is_space(str[size]) && str[size] != ':')
		size++;
	temp_key = (char*)malloc(sizeof(char) * (size + 1));
	if (!temp_key)
		return (0);
	while (++i < size)
		temp_key[i] = str[i];
	temp_node = g_dict_begin;
	if (get_value(temp_key) != 0)
	{
		free(temp_key);
		return (0);
	}
	free(temp_key);
	return (1);
}

int		check_valid(char *str)
{
	int	key_index;
	int	value_index;
	int	col_index;

	key_index = 0;
	col_index = 0;
	while (str[col_index] != ':')
		col_index++;
	while (key_index < col_index && str[key_index] >= '0'
	&& str[key_index] <= '9')
		key_index++;
	while (key_index < col_index && is_space(str[key_index]))
		key_index++;
	value_index = col_index + 1;
	while (str[value_index] && is_space(str[value_index]))
		value_index++;
	while (str[value_index] && is_printable(str[value_index]))
		value_index++;
	if (str[value_index] != 0 || key_index != col_index)
		return (0);
	if (!check_duplication(str))
		return (0);
	return (1);
}

int		check_key_value(char *str)
{
	int		exist_colon;
	int		key_num;
	int		value_num;
	int		i;

	i = -1;
	exist_colon = 0;
	key_num = 0;
	value_num = 0;
	while (str[++i])
	{
		if (str[i] == ':')
			exist_colon++;
		else if (!is_space(str[i]))
		{
			if (exist_colon)
				value_num++;
			else
				key_num++;
		}
	}
	if (exist_colon == 1 && key_num > 0 && value_num > 0 && check_valid(str))
		return (1);
	g_dict_file_error = 2;
	return (0);
}
