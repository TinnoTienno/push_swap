# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 18:13:27 by eschussl          #+#    #+#              #
#    Updated: 2024/01/23 18:39:16 by eschussl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g3
SRCS_PATH	=	sources/
COMMAND_PATH=	commands/
OBJS_PATH	=	objects/
SORTER_PATH =	sorter/
DISPLAY_PATH=	display/
LIBFT		=	libft/libft.a
SRCS		=	main.c\
				ft_listinit.c\
				ft_listfill.c\
				ft_freelist.c\
				$(addprefix $(DISPLAY_PATH),\
				ft_display_stack.c\
				ft_display_tab.c\
				ft_display_struct.c)\
				ft_error.c\
				ft_newelement.c\
				ft_structinit.c\
				ft_strtointtab.c\
				$(addprefix $(COMMAND_PATH),\
				ft_swap.c\
				ft_push.c\
				ft_rotate.c\
				ft_reverse_rotate.c)\
				$(addprefix $(SORTER_PATH),\
				ft_presorter.c\
				ft_quicksorttab.c\
				ft_sorter.c\
				ft_quicksortlist.c\
				ft_check_stack.c)
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