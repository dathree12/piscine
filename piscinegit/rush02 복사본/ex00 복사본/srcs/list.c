/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 14:29:34 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 12:40:51 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_list		*create_node(char *key, char *value)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->key = key;
	new_node->value = value;
	new_node->next = 0;
	return (new_node);
}

void		push_front(char *key, char *val)
{
	t_list	*tmp;

	if (!g_dict_begin)
		g_dict_begin = create_node(key, val);
	else
	{
		tmp = g_dict_begin;
		g_dict_begin = create_node(key, val);
		g_dict_begin->next = tmp;
	}
}

char		*get_value(char *key)
{
	t_list	*find;

	find = g_dict_begin;
	while (find)
	{
		if (ft_strcmp(find->key, key) == 0)
			return (find->value);
		find = find->next;
	}
	return (0);
}

void		list_clear(void)
{
	t_list	*erase;

	while (g_dict_begin)
	{
		erase = g_dict_begin;
		g_dict_begin = g_dict_begin->next;
		free(erase->key);
		free(erase->value);
		free(erase);
	}
}
