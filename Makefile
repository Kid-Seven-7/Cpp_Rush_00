NAME = rush00

SRC = srcs/main.cpp srcs/ship.class.cpp

SRCO = main.o ship.class.o

COMP = clang++

CPPFLAGS = -Wall -Wextra -Werror

LIB = -lncurses

all:	$(NAME)

$(NAME):
	$(COMP) $(CPPFLAGS) $(SRC) $(LIB)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
