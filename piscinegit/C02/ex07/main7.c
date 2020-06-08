/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main7.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 18:56:04 by daspark           #+#    #+#             */
/*   Updated: 2020/06/04 12:38:27 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern int	ft_str_is_strupcase(char *str);

int main()
{

	char str1[] = "hellodaseul";
	char str2[] = "";
	char str3[] = "HELLODASEUL";
	char str4[] = "023hello20948DASEL";
	
	ft_str_is_strupcase(str1);
	printf("%s \n", str1);
	ft_str_is_strupcase(str2);
	printf("%s \n", str2);
	ft_str_is_strupcase(str3);
	printf("%s \n", str3);
	ft_str_is_strupcase(str4);
	printf("%s \n", str4);
}
