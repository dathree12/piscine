/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/03 21:10:13 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	ft_str_is_lowercase(char *str);

int main()
{
	int i;

	char str1[] = "hellodaseul";
	char str2[] = "02347893247";
	char str3[] = "0129348He";
	char str4[] = "";
	
	i = ft_str_is_lowercase(str1);
	printf("%d \n",i);
	i = ft_str_is_lowercase(str2);
	printf("%d \n", i);
	i = ft_str_is_lowercase(str3);
	printf("%d \n", i);
	i = ft_str_is_lowercase(str4);
	printf("%d \n", i);
}	
