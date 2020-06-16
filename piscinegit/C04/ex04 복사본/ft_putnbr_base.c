/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 08:46:32 by daspark           #+#    #+#             */
/*   Updated: 2020/06/12 19:56:30 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_invalid(char	*base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{	
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
}

		return (0);
}	

int		ft_strlen(char *base)
{
	int len;

	i = 0;
	while (*base != '\0')
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int n;
	int nbr
	if (ft_invalid(base))
		return ;
	
	n = ft_strlen(base);


}
