/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 16:12:39 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 18:27:13 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		is_space(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

char	*cut_key(char *str, int col_index)
{
	char	*ret;
	int		size;

	size = 0;
	while (size < col_index && !is_space(str[size]))
		size++;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, str, size + 1);
	return (ret);
}

char	*cut_value(char *str, int col_index)
{
	char	*ret;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (is_space(str[col_index + 1]))
		col_index++;
	while (str[col_index + 1 + size])
		size++;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (0);
	while (i < size)
	{
		if (is_space(str[col_index + i]) && is_space(str[col_index + i + 1]))
		{
			col_index++;
			continue;
		}
		ret[i] = str[col_index + i + 1];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
