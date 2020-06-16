/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:30:14 by daspark           #+#    #+#             */
/*   Updated: 2020/06/15 18:16:45 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
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

char	ft_putstr(char *b)
{
	int i;

	i = 0;
	while (b[i] != '\0')
	{
		write(1, &b[i], 1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = argc - 1;
	while (i > 0)
	{
		j = 1;
		while (j < i)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				temp = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = temp;
			}
			j++;
		}
		i--;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	ft_sort_int_tab(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
