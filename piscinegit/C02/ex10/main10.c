/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/04 14:44:17 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = "hello daseul";
	char dest[200] = "bye daseul";
	unsigned int n = 4;
	unsigned int i = ft_strlcpy(dest, src, n);

	ft_strlcpy(dest, src, n);
	printf("%s", dest);
	printf("%d", i);
}
