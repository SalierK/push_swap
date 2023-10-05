NAME = push_swap
CC = gcc
FLAGS = -Wall -Wextra -Werror

SRCS = main.c \
	   ps_fon1.c \
	   ps_fon2.c \
	   utils1.c \
	   utils.c \
	   checks.c\
	   short_sort.c \
	   radix.c \
	   init.c 


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)

.c.o:
	@$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY : fclean re clean all