#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = i;
	while (s[j] && (s[j] != ' ' || s[j] != '\n' || s[j] != '\t'))
		j++;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (str == NULL)
		return (NULL);
	while (k < j - i)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
