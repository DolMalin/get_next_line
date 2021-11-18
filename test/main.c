#include "../get_next_line.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	int	fd;
	
	(void)ac;
	fd = open(av[1], O_RDONLY);
	char *str = get_next_line(fd);
	while (str)
	{
		printf("%s", str);
		str = get_next_line(fd);
	}
	return (0);
}
