/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 21:17:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/01 13:21:21 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_swap(int *a, int *b);

int main()
{	
	int a[1];
	int b[1];
	
	a[0] = '4';
	b[0] = '5';

	ft_swap(&a[0], &b[0]);
	write(1, &a[0], 1);
	write(1, &b[0], 1);
	
	return(0);
}