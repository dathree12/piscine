/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 11:12:40 by daspark           #+#    #+#             */
/*   Updated: 2020/06/02 11:21:47 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_line(int i, char a, char b, char c)
{
	ft_putchar(a);
	while(i-2 > 0)
	{
		ft_putchar(b);
		i--;
	}
	ft_putchar(c);

void	rush(int x, int y)
{
	if( x <= 0 || y <= 0)
	return;

	int row = 1;
	while( row <= 5)
	{
		if( row == 1)
		print_line(x, 'A', 'B', 'C');
		else if(row != y)
		print_line(x, 'B', ' ', 'C');
		else
		print_line(x, 'C', 'B', 'A');
		ft_putchar("\n");
		i++;}
}	
