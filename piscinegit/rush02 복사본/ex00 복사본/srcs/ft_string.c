/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 10:25:56 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 14:16:25 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int					ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i])
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (a[i] - b[i]);
}

int					ft_strlen(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char				*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(src);
	while (i < (int)n && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < (int)n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_len;
	int	i;

	src_len = ft_strlen(src);
	i = 0;
	if (src_len + 1 < (int)size)
		ft_strncpy(dest, src, src_len + 1);
	else if (size != 0)
	{
		ft_strncpy(dest, src, (int)size - 1);
		dest[size - 1] = '\0';
	}
	return (src_len);
}

void				print(char *key)
{
	char	*value;

	value = 0;
	value = get_value(key);
	if (g_first_num)
		ft_putstr(" ");
	if (value)
		ft_putstr(value);
	g_first_num++;
}
