#include "get_next_line.h"
char 	*check_remainder(char *remainder, char **line)
{
	char *point;

	point = NULL;
	if (remainder)
		if ((point = ft_strchr(remainder, '\n')))
		{
			*point = '\0';
			*line = ft_strdup(remainder);
			ft_strcpy(remainder, ++point);
		}
		else
		{
			*line = ft_strdup(remainder);
			ft_strclr(remainder);
		}
	else
		*line = ft_strnew(1);
	return (point);
}

int get_next_line(int fd, char **line)
{
	static char	*remainder;
	char		buff[BUFF_SIZE + 1];
	int			byte_was_read;
	char 		*point;
	char 		*tmp;

	point = check_remainder(remainder, line);
	while (!point && (byte_was_read = read(fd, buff, BUFF_SIZE)))
	{
		buff[byte_was_read] = '\0';
		if ((point = ft_strchr(buff, '\n')))
		{
			*point = '\0';
			point++;
			remainder = ft_strdup(point);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buff);
		free(tmp);
	}
	return (byte_was_read || ft_strlen(remainder) || ft_strlen(*line) ? 1 : 0);
}
