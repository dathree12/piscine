/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoukim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 10:23:10 by kyoukim           #+#    #+#             */
/*   Updated: 2020/05/30 17:05:34 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void		ft_putchar(char c);

void			print_line(int i, char a, char b, char c)
{
	ft_putchar(a);
	while (i - 2 > 0)
	{
		ft_putchar(b);
		--i;
	}
	ft_putchar(c);
}

void			rush(int x, int y)
{
	int row;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		if (row == 1)
			print_line(x, 'A', 'B', 'A');
		else if (row != y)
			print_line(x, 'B', ' ', 'B');
		else
			print_line(x, 'C', 'B', 'C');
		ft_putchar('\n');
		++row;
	}
}
