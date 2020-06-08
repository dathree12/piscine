/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/03 21:18:29 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	ft_str_is_uppercase(char *str);

int main()
{
	int i;

	char str1[] = "hellodaseul";
	char str2[] = "02347893247";
	char str3[] = "0129348He";
	char str4[] = "";
	char str5[] = "HELLODASEUL";
	
	i = ft_str_is_uppercase(str1);
	printf("%d \n",i);
	i = ft_str_is_uppercase(str2);
	printf("%d \n", i);
	i = ft_str_is_uppercase(str3);
	printf("%d \n", i);
	i = ft_str_is_uppercase(str4);
	printf("%d \n", i);
	i = ft_str_is_uppercase(str5);
	printf("%d \n", i);
}
