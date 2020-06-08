/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:14:38 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 15:35:26 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	return (dest);
}

int	main()
{
	char a[30] = "abc";
	char b[30] = "def";
	char c[30] = "";
	char d[30] = "a c";
	
	printf("%s \n", ft_strcat(a, b));
	printf("%s \n", ft_strcat(c, b));
	printf("%s \n", ft_strcat(a, c));
	printf("%s \n", ft_strcat(d, b));
	return (0);
}	
