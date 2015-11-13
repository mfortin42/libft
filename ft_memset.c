#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	
	str = (char *)s;
	while (--n >= 0)
		str[n] = c;
	return (s);
}
