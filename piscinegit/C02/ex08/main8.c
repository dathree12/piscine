/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/04 12:33:23 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	ft_str_is_strlowcase(char *str);

int main()
{

	char str1[] = "hellodaseul";
	char str2[] = "";
	char str3[] = "HELLODASEUL";
	
	ft_str_is_strlowcase(str1);
	printf("%s \n", str1);
	ft_str_is_strlowcase(str2);
	printf("%s \n", str2);
	ft_str_is_strlowcase(str3);
	printf("%s \n", str3);
}
