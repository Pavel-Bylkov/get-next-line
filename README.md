# get-next-line
Вызов этой функции в цикле позволит читать текст, доступный в файловом дескрипторе, по одной строке за раз до EOF.

Прототип:
int	get_next_line(int fd, char **line);

Пример компиляции с файлом main.c
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 main.c  get_next_line.c get_next_line_utils.c

По умолчанию в хедере объявляется константа BUFFER_SIZE=32


Пример содержимого файла main.c

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int fd;
	char *line = 0;
	int	i;

	printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);
    	if (!(fd = open("files/alphabet", O_RDONLY)))
    	{
		printf("\nError in open\n");
      		return (1);
   	}
    	printf("file open done %d\n", fd);

	while ((i = get_next_line(fd, &line)) > 0)
	{
		printf("i = %d %s\n", i, line);
		if (line != NULL)
		    free(line);
	}
	printf("i = %d %s\n", i, line);
	if (line != NULL)
	    free(line);
	if (fd > 0)
		if (close(fd) != 0)
		{
			printf("Cannot close file (descriptor=%d)\n", fd);
			return (1);
		}
	return(0);
}