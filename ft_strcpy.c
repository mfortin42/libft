#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * ft_strlen(dest) + 1);
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
