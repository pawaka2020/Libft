#include "libft.h"
/*
returns integer from string (CHECKED)
*/
static int	empty(char c)
{
	if (c == 32 || c == '\t' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\v' || c == '\f')
		return (1);
	else
		return (0);
}

static int	isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] && empty(str[i]))
		i++;
	if (str[i] && str[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "    12345abc";
	printf("atoi value = %d\n", atoi(str));
	printf("ft_atoi value = %d\n", ft_atoi(str));
}
*/