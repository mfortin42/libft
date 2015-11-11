#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
			j = 0;
			while (s1[i + j] == s2[j])
			{
				if (s2[j] == '\0')
					return ((char *)s1 + i);
				j++;
			}
		i++;
	}
	return (NULL);
}
