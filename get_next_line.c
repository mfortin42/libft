#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/*int	main(int ac, char **av)
{
	char	*line;
	int		fd;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		printf("%s\n", line);
	}
	return (0);
}*/

static size_t	ft_cnt_chr(char *tmp)
{
	size_t	i;

	i = 0;
	while (tmp[i] != '\0' && tmp[i] != '\n')
		i++;
	return (i);
}

int	get_next_line(int fd, char **line)
{
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	static char	*tmp2 = "";
	int		v;

	tmp = tmp2;
	if (read(fd, buff, 1) == -1 || line == NULL)
		return (-1);
	while ((v = read(fd, buff, BUFF_SIZE)))
	{
		buff[v] = '\0';
		tmp = ft_strjoin(tmp, buff);
	}
	if (ft_strchr(tmp, '\n'))
	{
		tmp2 = ft_strdup(ft_strchr(tmp, '\n') + 1);
		*line = ft_strsub(tmp, 0, ft_cnt_chr(tmp));
		return (1);
	}
	*line = ft_strsub(tmp, 0, ft_cnt_chr(tmp));
	if (ft_strchr(tmp, '\n'))
		tmp2 = ft_strdup(ft_strchr(tmp, '\n') + 1);
	if (ft_strchr(tmp, '\n'))
		return (1);
	return (0);
}
