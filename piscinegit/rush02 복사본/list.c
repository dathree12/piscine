/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daspark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 15:04:56 by daspark           #+#    #+#             */
/*   Updated: 2020/06/13 15:55:39 by daspark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//연결리스트를 구현할 구조체
typedef struct s_list
{
	char *key;
	char *value;
	struct s_list* next;
}t_list;

int	main()
{
	struct s_list *head = malloc(sizeof(struct s_list));

	struct s_list *s_list1 = malloc(sizeof(struct s_list));
	head -> next = s_list1;
	s_list1->data
}
