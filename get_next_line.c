#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int ac, char **av)
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
}

static int	ft_cnt_chr(char *tmp)
{
	unsigned int i;

	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	return (i);
}

int	get_next_line(int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*tmp = "";
	int			v;

	if (line == NULL || fd < 0 || read(fd, buff, 0) < 0)
		return (-1);
	while (ft_strchr(tmp, '\n') == NULL && (v = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[v] = '\0';
		tmp = ft_strjoin(tmp, buff);
	}
	*line = ft_strsub(tmp, 0, ft_cnt_chr(tmp));
	if (ft_strchr(tmp, '\n'))
	{
		tmp = ft_strchr(tmp, '\n') + 1;
		return (1);
	}
	return (v ? 1 : 0);
}
