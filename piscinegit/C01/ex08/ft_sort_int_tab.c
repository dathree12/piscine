/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:05:53 by daspark           #+#    #+#             */
/*   Updated: 2020/06/02 16:38:42 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = size - 1;
	while(i > 0)
	{
		j = 0;
		while(j < i)
		{
			if(tab[j]>tab[j+1])
			{
				temp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = temp;
			}
			j++;
		}
		i--;
	}	
}
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
