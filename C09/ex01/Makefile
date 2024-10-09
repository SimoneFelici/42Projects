NAME    = libft.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCDIR  = srcs
INCDIR  = includes
FILES   = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS    = $(addprefix $(SRCDIR)/, $(FILES))

OBJS    = ${SRCS:.c=.o}

RM      = rm -f

all:    ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

${NAME}: ${OBJS} 
	ar -rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
