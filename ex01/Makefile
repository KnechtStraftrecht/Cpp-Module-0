NAME 	= phonebook

CCP 	= g++

FLAGS 	= -Wall -Wextra -Werror -std=c++98

INC_H 	= -I./srcs/

SRCS 	= srcs/phonebook.cpp

OBJS 	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CCP) $(FLAGS) $(INC_H) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
