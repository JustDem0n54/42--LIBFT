NAME	= libft.a

SRCS	= \
		ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c

OBJS	= ${SRCS:.c=.o}

CC	= cc
RM	= rm -f
AR	= ar rc

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
		
${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}
		
all:		${NAME}

clean:
		${RM} ${OBJS}
		
fclean:		clean
		${RM} ${NAME}
	
re:		fclean all