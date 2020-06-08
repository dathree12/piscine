/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/05 22:07:42 by daspark           #+#    #+#             */
/*   Updated: 2020/06/06 16:37:55 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_change(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int a;

	i = 0;
	while (str[i] != '\0')
	{
		ft_change(str, i);
		i++;
	}
	a = 0;
	while (str[a] != '\0')
	{
		if (!((str[a] >= 'a' && str[a] <= 'z')
					|| (str[a] >= 'A' && str[a] <= 'Z')
					|| (str[a] >= '0' && str[a] <= '9')))
			str[a + 1] = str[a + 1] - 32;
		a++;
	}
	return (str);
}
#include <stdio.h>
int	main()
{
	char str[99] = "qweqlkwsa s$d #$@s ^03s";
	printf("%s", ft_strcapitalize(str));
}

