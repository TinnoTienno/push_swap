# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/15 18:13:27 by eschussl          #+#    #+#              #
#    Updated: 2024/02/13 14:16:20 by eschussl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -g3
SRCS_PATH	=	sources/
COMMAND_PATH=	commands/
OBJS_PATH	=	objects/
PARSING_PATH=	parsing/
SORTING_PATH =	sorting/
DISPLAY_PATH=	display/
ERROR_PATH	=	errors/
FREE_PATH	=	free/
ALGO_PATH	=	algo/
LIBFT		=	libft/libft.a
SRCS		=	main.c\
				ft_pslist.c\
				$(addprefix $(ERROR_PATH),\
				ft_error_ps.c)\
				$(addprefix $(ALGO_PATH),\
				ft_checksorted.c\
				ft_nbmove.c\
				ft_nbmovecumul.c)\
				$(addprefix $(SORTING_PATH),\
				ft_sorting.c\
				ft_quicksorttab.c\
				ft_firstpush.c\
				ft_lookformin.c\
				ft_pushing_to_a.c\
				ft_sort3.c\
				ft_sort4.c\
				ft_sortingsmall.c)\
				$(addprefix $(COMMAND_PATH),\
				ft_push.c\
				ft_commands.c\
				ft_swap.c\
				ft_rotate.c\
				ft_reverse_rotate.c)\
				$(addprefix $(PARSING_PATH),\
				ft_parsing.c\
				ft_newelement.c\
				ft_initlist.c\
				ft_initstruct_ps.c\
				ft_parsingonestr.c\
				ft_parsingstr.c\
				ft_parsinglist.c\
				ft_parsingliststr.c)\
				$(addprefix $(FREE_PATH),\
				ft_freelist_ps.c\
				ft_freetab_ps.c\
				ft_freestruct_ps.c)\
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