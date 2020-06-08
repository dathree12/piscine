/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:37:26 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 22:13:59 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_length(char *dest)
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
	while (i_src < nb && src[i_src] != '\0')
	{
		dest[i_dest + leng] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest + leng] = '\0';
	return (dest);
}
