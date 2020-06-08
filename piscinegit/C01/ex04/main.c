/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 21:17:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/01 20:05:42 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
extern	void	ft_ultimate_div_mod(int *a, int *b);

int main()
{
	int d = 20;
	int c = 3;
	
	ft_ultimate_div_mod(&d, &c);
	printf("%d %d", d, c);
		return(0);
}	
