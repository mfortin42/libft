#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*tmp;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	tmp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (tmp == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = s[i];
		i++;
	}
	while (--n >= 0)
		d[n] = tmp[n];
	free(tmp);
	return (dest);
}
