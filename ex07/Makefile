# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbourgea <rbourgea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/11 16:21:22 by rbourgea          #+#    #+#              #
#    Updated: 2021/06/12 15:27:32 by rbourgea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= replace

CPP				= clang++

CFLAGS			= -Wall -Wextra -Werror -std=c++98

SRCS			= replace.cpp

OBJS			= $(SRCS:.cpp=.o)

all: 			$(NAME)

$(NAME): 		$(SRCS)
				$(CPP) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
				rm -rf $(OBJS)

fclean: 		clean
				rm -f $(NAME)
				rm -f test1.txt.replace
				rm -f test2.txt.replace

re: 			fclean all