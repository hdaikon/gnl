
#ifndef GNL_GET_NEXT_LINE_H
#define GNL_GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <fcntl.h>

# ifndef BUFF_SIZE
#  define BUFF_SIZE 19
# endif

char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_strnew(size_t size);
int		get_next_line(int fd, char **line);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *m, size_t n);

#endif //GNL_GET_NEXT_LINE_H
