CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/core.c srcs/dictionary.c srcs/ft_string.c srcs/list.c srcs/main.c srcs/read.c srcs/util.c srcs/valid.c
OBJS = $(SRCS:.c=.o)
INC = includes
NAME = rush-02

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
