/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:51:53 by mupolat           #+#    #+#             */
/*   Updated: 2022/12/17 22:51:39 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include   <stdio.h>
# include   <unistd.h>
# include   <stdlib.h>
# include   <string.h>

int     ft_isalnum(int  str);
int     ft_isalpha(int  str);
int     ft_isdigit(int  str);
int     ft_isascii(int  str);
int     ft_isprint(int  str);
int     ft_memcmp(const void *ptr1, const   void *ptr2, size_t n);
int     ft_toupper(int  c);
int     ft_tolower(int  c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_atoi(const   char    *str);

void    *ft_memset(void *dst, int   c,  size_t  n);
void    *ft_memcpy(void *dst, const void    *src, size_t    n);
void    *ft_memmove(void    *dst, const void    *src, size_t n);
void    *ft_memchr(const    void *ptr, int  c, size_t n);
void    ft_bzero(void   *src, size_t n);
void    *ft_calloc(size_t  n, size_t   s);

size_t	ft_strlen(const	char *str);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t   s);


char    *ft_strchr(const char   *str, int c);
char    *ft_strrchr(const char  *str, int   c);
char    *ft_strnstr(const char *dst, const char *src, size_t n);


#endif
