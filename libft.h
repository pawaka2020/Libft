/*
How to use this header:
Include this at the top of main.c file whenever you want to gcc the main.c file with libft.a
Include this at the top of every ft_*.c file as well
*/
#ifndef LIBFT_H
# define LIBFT_H
//The ft_*.c files use these libraries. Make sure to include libft.h in each 
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
//Prototypes for Libft project
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int 	ft_isalnum (int c);
int		ft_isascii(int c);
int 	ft_isprint(int c);
size_t		ft_strlen(const char *s);
void 	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
//additional functions
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);

//End of header
#endif