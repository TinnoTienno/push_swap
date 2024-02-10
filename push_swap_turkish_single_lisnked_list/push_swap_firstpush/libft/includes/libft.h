/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eschussl <eschussl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:51:19 by eschussl          #+#    #+#             */
/*   Updated: 2024/02/05 13:59:17 by eschussl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/*##############
#      LIBS     #
 ##############*/
 
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

/*#####################################################################################
#                                                                                      #
#                                        LIBFT                                         #
#                                                                                      #
 #####################################################################################*/
 
typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}					t_list;

/*##############
#      LST      #
 ##############*/

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

/*##############
#      MEM      #
 ##############*/

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *memoryblock, int searchChar, size_t size);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);

/*##############
#      PUT      #
 ##############*/

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
int		ft_putlchar_fd(int fd, char c);
int		ft_putlstr_fd(int fd, char *str, int size);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

/*##############
#       IS      #
 ##############*/

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);

/*##############
#       TO      #
 ##############*/
 
int		ft_tolower(int c);
char	*ft_toupper(char *str);

/*##############
#     ALLOC     #
 ##############*/

void	*ft_calloc(size_t elementcount, size_t elementsize);
void	*ft_setalloc(size_t elementsize, size_t elementcount, int c);

/*##############
#    CONVERT    #
 ##############*/

int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

/*##############
#      STR      #
 ##############*/

char	*ft_strchr(const char *s, int c);
void	*ft_strdcpy(char *src, char *dest, int dif);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *first, const char *second, size_t length);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

/*####################################################################################
#                                                                                     #
#                                       PRINTF                                        #
#                                                                                     #
 ####################################################################################*/

/*##############
#  STRUCTURES  #
 ##############*/
 
typedef struct s_printfstruct
{
	int	hash;
	int	plus;
	int	space;
	int	minus;
	int	zero;
	int	v_width;
	int	precision;
	int	v_precision;
	int	specifier;
	int	flag_size;
}	t_printfstruct;

/*##############
#     MAIN     #
 ##############*/
 
void	ft_initstruct(t_printfstruct *new_struct);
int		ft_percentsign(int fd, t_printfstruct structure, va_list args);
void	ft_check(const char *str, t_printfstruct *structure);
int		ft_isflag(const char c);
int		ft_isspec(const char c);
int		ft_printf_fd(int fd, const char *str, ...);
int		ft_flen(size_t nbr);
int		ft_strread(int fd, const char *str, va_list args);

/*##############
#  SPECIFIERS  #
 ##############*/
 
int		ft_i(int fd, t_printfstruct structure, int nb);
char	*ft_ibis(t_printfstruct structure, int nb, char *str);
int		ft_zeri(int fd, t_printfstruct structure);
char	*ft_mini(t_printfstruct structure, char *src, int nb);
int		ft_c(int fd, t_printfstruct structure, int c);
int		ft_p(int fd, t_printfstruct structure, size_t nb);
char	*ft_pbis(t_printfstruct structure, char *str, char *prefix);
int		ft_s(int fd, t_printfstruct structure, char *s);
int		ft_u(int fd, t_printfstruct structure, unsigned int nb);
char	*ft_widthu(t_printfstruct structure, char *src);
int		ft_x(int fd, t_printfstruct structure, unsigned int nb);
char	*ft_xbis(t_printfstruct structure, char *str);
char	*ft_strxbis(t_printfstruct structure, char *prefix, char *src, char *dest);

/*####################################################################################
#                                                                                     #
#                                    GET_NEXT_LINE                                    #
#                                                                                     # 
 ####################################################################################*/

# ifndef GNL_BUFFER_SIZE
#  define GNL_BUFFER_SIZE 5
# endif

typedef struct s_gnlelement	t_gnlelement;
struct s_gnlelement
{
	t_gnlelement	*next;
	char		content[GNL_BUFFER_SIZE + 1];
	int			ssize;
	int			check;
};

typedef struct s_gnlist		t_gnlist;
struct s_gnlist
{
	t_gnlelement	*first;
};

char	*get_next_line(int fd);
void	ft_freelist(t_gnlist **list);
void	ft_freelistfd(t_gnlist **list, int fd);
int		ft_listsize(t_gnlist *list);
char	*ft_buildstr(t_gnlelement *element, char *tmp);

#endif