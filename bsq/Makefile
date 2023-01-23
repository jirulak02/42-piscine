NAME = bsq

SRC = main.c solve.c validation.c print.c
OBJCS = main.o solve.o validation.o print.o
CC		= cc
RM		= rm -rf
CFLAGS = -Wall -Wextra -Werror

all: objs
	$(CC)	${CFLAGS} -o ${NAME}	$(OBJCS)
	
objs:
	$(CC)	${CFLAGS} -c ${SRC}
	
clean:
	${RM} ${OBJCS}
	
fclean:	clean
	${RM} ${NAME}

re: fclean all
	
