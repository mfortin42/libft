#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}
