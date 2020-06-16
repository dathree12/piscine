/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 15:31:18 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 17:29:24 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*file_read(int fd)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *)malloc(sizeof(char) * (MAX_READ_LEN + 1));
	if (!ret)
		return (0);
	while (read(fd, &ret[i], 1))
	{
		g_end_of_file = 0;
		if (i == MAX_READ_LEN)
		{
			free(ret);
			return (0);
		}
		if (ret[i] == '\n')
		{
			ret[i] = 0;
			break ;
		}
		i++;
	}
	return (ret);
}

char	*read_num(char *input_num)
{
	int		size;
	int		front_zero;
	char	*ret;
	int		i;

	front_zero = 0;
	i = 0;
	size = ft_strlen(input_num);
	while (input_num[i] == '0')
	{
		i++;
		front_zero++;
	}
	while (input_num[i] && input_num[i] >= '0' && input_num[i] <= '9')
		i++;
	if (size == i && size - front_zero <= MAX_NUM_LEN)
	{
		if (front_zero == size)
			front_zero--;
		ret = (char*)malloc(sizeof(char) * (size - front_zero + 1));
		if (ret)
			ft_strlcpy(ret, &input_num[front_zero], size - front_zero + 1);
		return (ret);
	}
	return (0);
}

char	*read_stdin(void)
{
	int		i;
	char	*input;
	char	*ret;

	input = (char *)malloc(sizeof(char) * (MAX_NUM_LEN * 2 + 1));
	if (!input)
		return (0);
	i = 0;
	while (read(0, &input[i], 1))
	{
		if (input[i] == '\n')
		{
			input[i] = 0;
			break ;
		}
		i++;
		if (i > MAX_NUM_LEN * 2)
		{
			free(input);
			return (0);
		}
	}
	ret = read_num(input);
	free(input);
	return (ret);
}
