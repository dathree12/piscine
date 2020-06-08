/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 21:17:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/01 15:59:23 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
extern	void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int d;
	int c;
	ft_div_mod(15, 4, &d, &c);
	
	printf("%d", d);
	printf("%d", c);
	return(0);
}	
