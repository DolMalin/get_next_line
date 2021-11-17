#include "../get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	fd;
	
	(void)ac;
	fd = open(av[1], O_RDONLY);
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	return (0);
}
