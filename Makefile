NAME = Manage
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Category.cpp Event.cpp Person.cpp Performer.cpp Place.cpp Product.cpp Player.cpp ListPlace.cpp
OBJS = $(SRCS.cpp=.o)

$(NAME):
	c++ $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: $(NAME) clean fclean all