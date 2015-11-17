static int	ft_cat_buff_to_line(char **line, char *buff, char *tmp)
{
	unsigned int i;

	i = 0;
	if (tmp)
	{
		while (buff[i] != '\n')
			i++;
		ft_strncat(*line, buff, i - 1);
		ft_strclr(buff);
		return (1);
	}
	else
	{
		ft_strcat(*line, buff);
		ft_strclr(buff);
		return (0);
	}
}

int	ft_get_next_line(int fd, char **line)
{
	static char	buff[BUFF_SIZE];
	char		*tmp;
	int			v;

	v = 1;
	if (*line == NULL)
		return (-1);
	ft_strclr(*line);
	while (v)
	{
		v = read(fd, buff, BUFF_SIZE);
		tmp = ft_strchr(buff, '\n');
		if (ft_join(*line, buff, tmp))
			return (1);
	}
	return (0);
}
