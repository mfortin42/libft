#include "libft.h"

int	atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		rslt;

	i = 0;
	sign = 1;
	rslt = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt *= 10;
		rslt += str[i] - '0';
		i++;
	}
	return (rslt * sign);
}
