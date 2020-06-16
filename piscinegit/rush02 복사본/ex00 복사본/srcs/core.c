/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 10:26:31 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 17:25:54 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	g_num_read[3];
int		g_read_zero;
int		g_check_unit;
int		g_last_number;

void	print_dec_power(int num_len)
{
	char	*temp;
	int		i;

	i = 1;
	temp = (char*)malloc(sizeof(char) * num_len + 2);
	temp[num_len + 1] = 0;
	temp[0] = '1';
	while (i < num_len + 1)
	{
		temp[i] = '0';
		i++;
	}
	g_check_unit = 1;
	print(temp);
	free(temp);
}

int		handle_num(char *num, int len, int index)
{
	int	read_size;

	read_size = 1;
	if (num[index] != '0')
	{
		g_read_zero = 0;
		g_check_unit = 0;
		g_num_read[0] = num[index];
		if (len % 3 == 2)
		{
			if (num[index] == '1' && num[index + 1] != '0')
			{
				g_num_read[1] = num[index + 1];
				read_size++;
			}
			else
				g_num_read[1] = '0';
		}
		else
			g_num_read[1] = 0;
		print(g_num_read);
	}
	else
		g_read_zero = 1;
	return (read_size);
}

void	digit_to_string(char *num)
{
	int	num_len;
	int	read_size;
	int	cur_index;

	if (*num == '0')
		print("0");
	else
	{
		g_num_read[2] = 0;
		cur_index = 0;
		g_read_zero = 0;
		g_check_unit = 0;
		num_len = ft_strlen(num);
		while (num_len)
		{
			read_size = handle_num(num, num_len, cur_index);
			num_len = num_len - read_size;
			cur_index = cur_index + read_size;
			if (num_len > 2 && !g_check_unit && num_len % 3 == 0)
				print_dec_power(num_len);
			else if (!g_read_zero && num_len % 3 == 2)
				print("100");
		}
	}
	ft_putstr("\n");
}

void	rush02(int argc, char *argv[])
{
	if (argc <= 2)
		set_dictionary(DEFAULT_DICT);
	else if (argc == 3)
		set_dictionary(argv[1]);
	if (g_dict_file_error)
	{
		list_clear();
		ft_putstr("Dict Error\n");
		return ;
	}
	if (argc == 1)
		g_input_num = read_stdin();
	else if (argc == 2)
		g_input_num = read_num(argv[1]);
	else if (argc == 3)
		g_input_num = read_num(argv[2]);
	if (!g_input_num_error && g_input_num)
		digit_to_string(g_input_num);
	else
		ft_putstr("Error\n");
	list_clear();
	free(g_input_num);
}
