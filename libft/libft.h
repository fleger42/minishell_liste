/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:01:37 by fleger            #+#    #+#             */
/*   Updated: 2021/01/10 08:18:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(const char *nptr);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_nbr_c(int n);
char				*ft_itoa(int n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memset(void*s, int c, size_t n);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_aff(int n, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);
int					number_of_word(char *str, char c);
int					fin(char **tab, int k);
char				*ft_strchr(const char *s, int c);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *big,
const char *little, size_t len);
char				*ft_strrchr(const char *s, int c);
int					is_charset(char c, char *charset);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstdelone(t_list *lst, void (*del)(void*));
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_lstsize(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
#endif
