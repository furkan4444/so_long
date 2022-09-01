#include "so_long.h"

char *get_next_line(int fd)
{
	char buff = 0;
	char *line = (char *)malloc(sizeof(char) * 9999);
	int ret = 1;
	int i = 0;

	while(ret > 0)
	{
		ret = read(fd, &buff, 1);
		if(ret <= 0)
			break;
		line[i++] = buff;
	}
	line[i] = 0;
    if(!*line)
    {
        free(line);
        return NULL;
    }
	return(line);
}
