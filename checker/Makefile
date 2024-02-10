# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 18:13:27 by eschussl          #+#    #+#              #
#    Updated: 2024/02/10 16:17:38 by eschussl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g3
SRCS_PATH	=	sources/
COMMAND_PATH=	commands/
OBJS_PATH	=	objects/
PARSING_PATH=	parsing/
SORTING_PATH =	sorting/
DISPLAY_PATH=	display/
FREE_PATH	=	free/
LIBFT		=	libft/libft.a
SRCS		=	main.c\
				$(addprefix $(SORTING_PATH),\
				ft_sorting.c\
				ft_checksorted.c\
				ft_cmdsvalues.c)\
				$(addprefix $(COMMAND_PATH),\
				ft_push.c\
				ft_swap.c\
				ft_rotate.c\
				ft_reverse_rotate.c\
				ft_command.c)\
				$(addprefix $(PARSING_PATH),\
				ft_parsing.c\
				ft_newelement.c\
				ft_initlist.c\
				ft_parsingstring.c\
				ft_commandparsing.c\
				ft_comparecheck.c)\
				$(addprefix $(FREE_PATH),\
				ft_freelist_ps.c\
				ft_freetab.c)\
				$(addprefix $(DISPLAY_PATH),\
				ft_display_forward.c\
				ft_display_backward.c)
				
OBJS		=	$(addprefix $(OBJS_PATH),$(SRCS:.c=.o))
INC			=	-I./includes -I./libft/includes
all : $(NAME)

$(NAME): $(OBJS)
	make -C libft/
	$(CC) $(CFLAGS) $^ -o $@ $(LIBFT) 

$(OBJS_PATH)%.o:	$(SRCS_PATH)%.c
	@mkdir -p $(OBJS_PATH)
	@mkdir -p $(OBJS_PATH)$(COMMAND_PATH)
	@mkdir -p $(OBJS_PATH)$(SORTING_PATH)
	@mkdir -p $(OBJS_PATH)$(DISPLAY_PATH)
	@mkdir -p $(OBJS_PATH)$(ERROR_PATH)
	@mkdir -p $(OBJS_PATH)$(PARSING_PATH)
	@mkdir -p $(OBJS_PATH)$(FREE_PATH)
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