NAME = ft_Retro

SRCPATH = ./srcs/

SRC = $(SRCPATH)main.cpp\
			$(SRCPATH)ussEnterprise.class.cpp\
			$(SRCPATH)deathStar.class.cpp\
			$(SRCPATH)scenery.class.cpp\
			$(SRCPATH)stars.class.cpp\
			$(SRCPATH)bullets.class.cpp\
			$(SRCPATH)gameLogic.cpp\
			$(SRCPATH)gamePlay.cpp\
			$(SRCPATH)initGame.cpp\
			$(SRCPATH)addObjects.cpp\
			$(SRCPATH)gameOver.cpp

COMP = clang++

CPPFLAGS = -Wall -Wextra -Werror

LIB = -lncurses

all:	$(NAME)

$(NAME):
	reset
	$(COMP) $(SRC) $(CPPFLAGS) $(LIB) -o $(NAME)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
