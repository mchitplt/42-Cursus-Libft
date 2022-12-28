/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:51:53 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/28 16:46:25 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include   <stdio.h>
# include   <unistd.h>
# include   <stdlib.h>
# include   <string.h>
# include   <errno.h>
# include   <fcntl.h>

int		ft_isalnum(int str);
int		ft_isalpha(int str);
int		ft_isdigit(int str);
int		ft_isascii(int str);
int		ft_isprint(int str);
int		ft_memcmp(const void	*ptr1, const void	*ptr2, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char	*s1, const char	*s2, size_t n);
int		ft_atoi(const char	*str);

void	*ft_memset(void *dst, int c, size_t	n);
void	*ft_memcpy(void *dst, const void	*src, size_t	n);
void	*ft_memmove(void	*dst, const void	*src, size_t	n);
void	*ft_memchr(const void	*ptr, int c, size_t	n);
void	ft_bzero(void	*src, size_t	n);
void	*ft_calloc(size_t	n, size_t	s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f) (unsigned int, char*));

size_t	ft_strlen(const	char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t	s);

char	*ft_strchr(const char	*str, int c);
char	*ft_strrchr(const char	*str, int c);
char	*ft_strnstr(const char *dst, const char *src, size_t n);
char	*ft_strdup(const char	*s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char));

#endif
