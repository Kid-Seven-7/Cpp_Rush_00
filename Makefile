NAME = rush00

SRC =

SRCO =

COMP = clang++

CPPFLAGS = -Wall -Wextra -Werror

LIB = -lncurses

all:	$(NAME)

$(NAME):
	$(COMP) -c $(SRC) $(CPPFLAGS) $(LIB)
	$(COMP) -o $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
