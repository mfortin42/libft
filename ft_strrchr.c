#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	while (--i >= 0)
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}
