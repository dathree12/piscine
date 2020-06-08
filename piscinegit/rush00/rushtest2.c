/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushtest2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 22:08:47 by daspark           #+#    #+#             */
/*   Updated: 2020/06/01 22:24:22 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_line(int i, char a, char b, char c)
{
	ft_putchar(a);
	while ( i - 2 > 0)
	{
		ft_putchar(b);
		i--;
	}
	ft_putchar(c);
}	

void	rush(int x, int y)
{
	int row;
	if(x <= 0 || y <= 0)
	return ;
	row = 1;
	while (row <= y)
	{
	if (row == 1)
	print_line(x, 'A', 'B', 'C');
	else if (row != y)
	print_line(x, 'B', ' ', 'B');
	else
	print_line(x, 'A', 'B', 'C');
	ft_putchar('\n');
	row ++;
	}	
}

int main(void)
{
	rush(6, 8);
	return (0);
}
