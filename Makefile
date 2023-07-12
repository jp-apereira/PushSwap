NAME			= push_swap

CC = cc

RM = rm -f 

CFLAGS			= -Wall -Wextra -Werror -g -I inc

SRCS			= checkers.c errors.c ft_utils.c ft_utils2.c\
					rules1.c rules2.c rules3.c rules4.c\
					sort_utils.c sort_utils1.c sort_utils2.c sorting.c sorting2.c main.c\


all : $(NAME)

$(NAME): $(SRCS)
			$(CC) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean $(NAME)