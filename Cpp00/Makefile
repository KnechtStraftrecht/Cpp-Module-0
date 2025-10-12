NAME 	= megaphone

CCP 	= g++

FLAGS 	= -Wall -Wextra -Werror

INC_H 	= -I./srcs/

SRCS 	= srcs/megaphone.cpp

OBJS 	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CCP) $(FLAGS) $(INC_H) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY all clean fclean re