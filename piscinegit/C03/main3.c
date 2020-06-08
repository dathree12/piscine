/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:46:35 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 22:12:48 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_length(char *dest)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i_dest;
	int i_src;
	int leng;

	i_dest = 0;
	i_src = 0;
	leng = ft_length(dest);
	while (i_src < nb || src[i_src] != '\0')
	{
		dest[i_dest + leng] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest + leng] = '\0';
	return (dest);
}

int main()
{

	char a[30] = "123";
	char b[30] = "45678";
	char c[30] = "4";
	char d[30] = "456";

	printf("%s \n", ft_strncat(a, b, 3));
	printf("%s \n", ft_strncat(b, c, 3));
	printf("%s \n", ft_strncat(c, d, 3));
}	
