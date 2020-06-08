/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/08 15:37:26 by daspark           #+#    #+#             */
/*   Updated: 2020/06/08 21:23:31 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i_dest;
	int i_src;
	int leng;

	leng = ft_leng(dest);
	i_dest = 0;
	i_src = 0;
	while (i_src < nb && src[i_src] != '\0')
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
