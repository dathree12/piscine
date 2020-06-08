/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 19:39:33 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 20:54:17 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	printf("%d \n", ft_strncmp("abcdef", "ghijk", 3));
	printf("%d \n", ft_strncmp("abcdef", "abc", 3));
	printf("%d \n", ft_strncmp("abcdef", "a", 3));
	printf("%d \n", ft_strncmp("a", "abc", 3));
	printf("%d \n", ft_strncmp("a", "a", 3));
	printf("%d \n", strncmp("abcdef", "ghijk", 3));
	printf("%d \n", strncmp("abcdef", "abc", 3));
	printf("%d \n", strncmp("abcdef", "a", 3));
	printf("%d \n", strncmp("a", "abc", 3));
	printf("%d \n", strncmp("a", "a", 3));
}

