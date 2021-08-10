#include "libft.h"
//places index after all the empty spaces in str
static void	adjustempty(const char *str, size_t *i)
{
	int	j;

	j = -1;
	while (j++, str[j])
	{
		if (str[j] == ' ' || str[j] == '\n' || str[j] == '\t' )
			*i += 1;
		else if(str[j] == '\v' || str[j] == '\f' || str[j] == '\r')
			*i += 1;
	}
}
//places index after all the '-' and '+' letters in str
//adjusts sign as well
static void adjustsign(const char *str, size_t *i, int *sign)
{
	if (str[*i] == '-')
		*sign = -1;
	if ((str[*i] == '-') || (str[*i] == '+'))
		*i += 1;
}
//set nbr as long instead of int
//for testing if nbr exceeds int max/min value
int	ft_atoi(const char *str)
{
	long	nbr;
	int	sign;
	size_t	i;

	nbr = 0;
	sign = 1;
	i = 0;
	adjustempty(str, &i);
	adjustsign(str, &i, &sign);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr > 2147483647 && sign == 1)
			return (-1);
		if (nbr > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("for max long, atoi value = %d\n", atoi("99999999999999999999999999"));
	printf("for max long, ft_atoi value = %d\n", ft_atoi("99999999999999999999999999"));
	printf("for min long, atoi value = %d\n", atoi("-99999999999999999999999999"));
	printf("for min long, ft_atoi value = %d\n", ft_atoi("-99999999999999999999999999"));
	printf("for null, atoi value = %d\n", atoi("\0"));
	printf("for null, ft_atoi value = %d\n", ft_atoi("\0"));
}
*/
