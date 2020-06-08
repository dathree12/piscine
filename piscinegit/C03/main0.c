/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 14:09:47 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 20:08:07 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main()
{
	printf("%d \n", ft_strcmp("abcde","abdef"));
	printf("%d \n", ft_strcmp("12345","12345"));
	printf("%d \n", ft_strcmp("adf","abf"));
	printf("%d \n", strcmp("abcde", "abdef"));
	printf("%d \n", strcmp("12345", "12345"));
	printf("%d \n", strcmp("adf", "abf"));
	return 0;
}
