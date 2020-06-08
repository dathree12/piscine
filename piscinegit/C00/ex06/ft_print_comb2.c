/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 15:36:04 by daspark           #+#    #+#             */
/*   Updated: 2020/05/31 18:06:33 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_put(int a, int b)
{
	ft_write(a / 10 + '0');
	ft_write(a % 10 + '0');
	ft_write(' ');
	ft_write(b / 10 + '0');
	ft_write(b % 10 + '0');
	if (a != 98)
	{
		ft_write(',');
		ft_write(' ');
	}
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put(a, b);
			b++;
		}
		a++;
	}
}
