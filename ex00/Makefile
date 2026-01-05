# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 11:23:16 by yuknakas          #+#    #+#              #
#    Updated: 2026/01/05 11:26:18 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	a.out
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/main.cpp srcs/Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFILE	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

clean:
	$(RMFILE) $(OBJS)

fclean: clean
	$(RMFILE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
