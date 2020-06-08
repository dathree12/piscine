/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:46:35 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 16:12:36 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (i_src < nb && src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}

int main()
{

	char a[30] = "apple pie";
	char b[30] = "banana pie";
	char c[30] = "";
	char d[30] = "good";

	printf("%s \n", ft_strncat(a, b, 10));
	printf("%s \n", ft_strncat(c, b, 5));
	printf("%s \n", ft_strncat(a, c, 3));
	printf("%s \n", ft_strncat(d, b, 2));
	printf("%s \n", ft_strncat(b, d, 8));
	printf("%s \n", ft_strncat(a, d, 0));
	return (0);
}	
