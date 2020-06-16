/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsokim <minsokim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/13 14:22:18 by minsokim          #+#    #+#             */
/*   Updated: 2020/06/14 17:22:08 by minsokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define DEFAULT_DICT "numbers.dict"
# define MAX_READ_LEN 1024
# define MAX_NUM_LEN 39

typedef	struct		s_list
{
	char			*key;
	char			*value;
	struct s_list	*next;
}					t_list;

extern	t_list		*g_dict_begin;
extern	char		*g_input_num;
extern	char		*g_dict_line;
extern	int			g_input_num_error;
extern	int			g_dict_file_error;
extern	int			g_end_of_file;
extern	int			g_last_number;
extern	int			g_first_num;

void				set_dictionary(char *file_name);
void				cut_and_push(char *str);
int					ft_strlen(char *str);
char				*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned	int		ft_strlcpy(char *dest, char *src, unsigned int size);
int					ft_strcmp(char *a, char *b);
void				print(char *key);
void				list_clear(void);
t_list				*create_node(char *key, char *value);
void				push_front(char *key, char *val);
char				*get_value(char *key);
void				ft_putstr(char *str);
char				*cut_key(char *str, int col_index);
char				*cut_value(char *str, int col_index);
int					is_printable(char c);
int					is_space(char c);
char				*file_read(int fd);
char				*read_num(char *input_num);
int					check_key_value(char *str);
int					check_duplication(char *str);
void				digit_to_string(char *num);
int					handle_num(char *num, int len, int index);
void				print_dec_power(int	num_len);
char				*read_stdin(void);
void				aaa(int argc, char *argv[]);
void				rush02(int argc, char *argv[]);

#endif
