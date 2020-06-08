/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:35:34 by daspark           #+#    #+#             */
/*   Updated: 2020/06/04 16:43:16 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

extern void	ft_putstr_non_printable(char *str);

int main()
{	
	char *str;
	str[0] = -1;
	str[1] = 1;

	ft_putstr_non_printable(str);
}
