SRCS	= ft_display_file.c ft_main.c 

OBJS	= ${SRCS:.c=.o}

NAME	= ft_display_file

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.PHONY: all clean fclean

all: ${NAME}

${NAME}: ${OBJS}
	${CC} $^ -o $@

%.o: %.c
	${CC} ${CFLAGS} -c $^ -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
