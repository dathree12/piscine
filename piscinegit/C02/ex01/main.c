/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/03 15:26:03 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char src[] = "hello daseul";
	char dest[200] = "bye daseul";
	unsigned int n = 4;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
}
