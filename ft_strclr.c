#include "libft.h"

void	ft_strclr(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
