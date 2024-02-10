# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 18:13:27 by eschussl          #+#    #+#              #
#    Updated: 2024/01/19 18:04:22 by eschussl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g3
SRCS_PATH	=	sources/
COMMAND_PATH=	commands/
OBJS_PATH	=	objects/
SORTER_PATH =	sorter/
LIBFT		=	libft/libft.a
SRCS		=	main.c\
				ft_arrayinit.c\
				ft_display_array.c\
				ft_error.c\
				ft_structinit.c\
				$(addprefix $(COMMAND_PATH),\
				ft_swap.c\
				ft_push.c\
				)
OBJS		=	$(addprefix $(OBJS_PATH),$(SRCS:.c=.o))
INC			=	-I./includes -I./libft/includes
all : $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT) 

$(OBJS_PATH)%.o:	$(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH)
	@mkdir -p $(OBJS_PATH)$(COMMAND_PATH)
	@mkdir -p $(OBJS_PATH)$(SORTER_PATH)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

bonus : all

clean :
	make -C libft/ clean
	rm -rf $(OBJS_PATH)

fclean : clean
	make -C libft/ fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all bonus clean fclean re
-include 