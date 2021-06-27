//
// Created by Humbert Daikon on 6/27/21.
//
#include "get_next_line.h"
int main(void)
{
	char *line;
	int fd;

	fd = open("/Users/hdaikon/Desktop/GNL/text.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s\n\n", line);

	get_next_line(fd, &line);
	printf("%s\n\n", line);

	get_next_line(fd, &line);
	printf("%s\n\n", line);

	get_next_line(fd, &line);
	printf("%s\n\n", line);

	return (0);

}
