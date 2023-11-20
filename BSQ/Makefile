CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = $(shell find . -name "*.c")

NAME = bsq

HEADER_DIR = ./

$(NAME):
	$(CC) $(CFLAGS) -I ${HEADER_DIR} $(SRC) -o $@

all: $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean

re: fclean all

.PHONY:
	all clean fclean re