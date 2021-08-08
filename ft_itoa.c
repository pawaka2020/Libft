/*
converts n into string. n can also be negative (Chcked)
*/
#include "libft.h"

static int	absvalue(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

static void	getmulti(int n, int *i, int *j)
{
	*i = 1;
	*j = 1;
	if (n == 0)
		return ;
	while ((n / *i) != 0)
	{
		*i *= 10;
		*j += 1;
	}
	*i /= 10;
	*j = *j - 1;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	getmulti(absvalue(n), &i, &j);
	if (n < 0)
	{
		str = malloc(j + 1);
		str[0] = '-';
		j = 1;
	}
	else
	{	
		str = malloc(j);
		j = 0;
	}
	n = absvalue(n);
	while (i !=0)
	{
		str[j] = (n / i) + '0';
		n = n - ((n / i) * i);
		i = i /10;
		j++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("result = %s\n", ft_itoa(-1000501));
}
*/
