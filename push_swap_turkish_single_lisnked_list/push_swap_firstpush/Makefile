# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 18:13:27 by eschussl          #+#    #+#              #
#    Updated: 2024/02/06 20:33:57 by eschussl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g3
SRCS_PATH	=	sources/
INIT_PATH	=	init/
COMMAND_PATH=	commands/
OBJS_PATH	=	objects/
SORTER_PATH =	sorter/
DISPLAY_PATH=	display/
ALGO_PATH	=	algorithm/
ERROR_PATH	=	error/
LIBFT		=	libft/libft.a
SRCS		=	main.c\
				$(addprefix $(ALGO_PATH),\
				ft_nbmove.c\
				ft_nbmovetofirststack.c\
				ft_nbmovetosecondstack.c\
				ft_sorter.c)\
				$(addprefix $(DISPLAY_PATH),\
				ft_display_stack.c)\
				$(addprefix $(INIT_PATH),\
				ft_make.c\
				ft_new_element.c\
				ft_init_tab.c)\
				$(addprefix $(ERROR_PATH),\
				ft_error_ps.c\
				ft_freelistps.c\
				ft_freestruct.c)\
				$(addprefix $(SORTER_PATH),\
				ft_quicksorttab.c\
				ft_sort_b.c\
				ft_sorttwo.c\
				ft_checksorted.c)\
				$(addprefix $(COMMAND_PATH),\
				ft_push.c\
				ft_reverse_rotate.c\
				ft_swap.c\
				ft_rotate.c)
				
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
	@mkdir -p $(OBJS_PATH)$(DISPLAY_PATH)
	@mkdir -p $(OBJS_PATH)$(INIT_PATH)
	@mkdir -p $(OBJS_PATH)$(ERROR_PATH)
	@mkdir -p $(OBJS_PATH)$(ALGO_PATH)
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