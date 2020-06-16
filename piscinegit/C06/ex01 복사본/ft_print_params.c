/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 21:17:08 by daspark           #+#    #+#             */
/*   Updated: 2020/06/15 14:42:59 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	int num;

	num = 1;
	while (num < argc)
	{
		write(1, argv[num], ft_strlen(argv[num]));
		write(1, "\n", 1);
		num++;
	}
	return (0);
}
