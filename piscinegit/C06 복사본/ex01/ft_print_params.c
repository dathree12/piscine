/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 21:17:08 by daspark           #+#    #+#             */
/*   Updated: 2020/06/14 21:25:06 by daspark          ###   ########.fr       */
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

	if (argc)
	{
		while()
		write(1, argv[num], ft_strlen(argv[num]));
		write(1, "\n", 1);
	}
	return (0);
}
