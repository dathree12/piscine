/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/03 20:11:55 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	ft_str_is_alpha(char *str);

int main()
{
	int i;

	char str1[] = "hello daseul";
	char str2[] = "02347893247";
	char str3[] = "0129348He";
	char str4[] = "";
	
	i = ft_str_is_alpha(str1);
	printf("%d \n",i);
	i = ft_str_is_alpha(str2);
	printf("%d \n", i);
	i = ft_str_is_alpha(str3);
	printf("%d \n", i);
	i = ft_str_is_alpha(str4);
	printf("%d \n", i);
}	
