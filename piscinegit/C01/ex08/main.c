/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:39:10 by daspark           #+#    #+#             */
/*   Updated: 2020/06/02 16:42:38 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

extern	void	ft_sort_int_tab(int *tab, int size);
int	main()
{
	int i;
	i = 0;
	int tab[] = {7, 4, 5, 1, 3};

	ft_sort_int_tab(tab, 5);
	for(i=0; i<5; i++)
		printf("%d",tab[i]);
	return 0;
}
