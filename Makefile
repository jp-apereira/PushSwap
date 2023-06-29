SRCS			=checkers.c errors.c ft_utils.c ft_utils2.c\
					rules1.c rules2.c rules3.c rules4.c\
					sort_utils.c sort_utils2.c sorting.c sorting2.c main.c\

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -g -I inc
NAME			= push_swap

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean