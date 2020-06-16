/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/14 20:06:42 by daspark           #+#    #+#             */
/*   Updated: 2020/06/14 20:44:02 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	lnb;

	i = 2;
	lnb = nb;
	if (nb <= 1)
		return (0);
	while (i * i <= lnb)
	{
		if (lnb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long long	i;
	long long	lnb;

	lnb = nb;
	i = 0;
	if (lnb <= 1)
		return (2);
	while (lnb > 1)
	{
		if (ft_is_prime(lnb))
			return (lnb);
		else
			lnb++;
	}
	return (lnb);
}
