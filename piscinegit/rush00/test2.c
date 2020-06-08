/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 12:48:45 by daspark           #+#    #+#             */
/*   Updated: 2020/06/03 13:47:57 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_line(int i, char a, char b, char c)
{
	ft_putchar(a);
	while(i - 2 > 0)
	{
		ft putchar(b);
		i--;
	}
	ft_putchar(c);
}


void	rush(int x, int y)
{
	int row;

	if(x <= 0 || y <= 0)
		return;
	row = 1;
	while(row <= y)
	{
		if(row == 1)
			print_line(x, 'A', 'B', 'C');
		else if(row != y)
			print_line(x, 'B', ' ', 'C');
		else
			print_line(x, 'C', 'B', 'C');
			ft_putchar('\n');
		row++
	}
}	
