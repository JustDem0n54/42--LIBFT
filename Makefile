SRCS	= main.c

OBJS	= ${SRCS:.c=.o}

NAME	= ./a.out

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		
${NAME}:	${OBJS}
		${CC} - o ${NAME} ${OBJS}
		
all:		${NAME}

clean:
		${RM} ${OBJS}
		
fclean:		clean
		${RM} ${NAME}
	
re:		fclean all