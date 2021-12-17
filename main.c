#include "get_next_line.h"

int	main()
{
	int		fd;
	char	*str;
	int		i = 0;

	fd = open("test.txt", O_RDONLY);
	while (i <= 3)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
		i++;
	}
	return (0);
}
