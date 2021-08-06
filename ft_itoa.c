/*
converts n into string. n can also be negative
*/
#include "libft.h"
#include <stdio.h>

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
		printf("in getmulti n: %d / i: %d = %d\n", n, *i , (n / *i));
		*i*=10;
		*j+=1;
	}
	*i/=10;
	*j=-1;
}

char *ft_itoa(int n)
{
	char *str;
	int	i;
	int	j;

	getmulti(absvalue(n), &i, &j);
	printf("value of i = %d, value of j = %d\n", i, j);
	if (n < 0)
	{
		str = malloc(j+1);
		str[0] = '-';
		j = 1;
	}
	else
	{	
		str = malloc(j+1);
		j = 0;
	}
	n = absvalue(n);
	printf("n = %d\n", n);
	while (i !=0)
	{
		str[j] = (n / i) + '0';
		printf("n:%d / i:%d = %d\n", n, i , n / i);
		printf("str[%d] = %c\n", j, str[j]);
		n = n - ((n / i) * i);
		i = i /10;
		j++;
	}
	return(str);
}

//#include <stdio.h>
int	main(void)
{
	printf("result = %s\n", ft_itoa(100));
	//printf("%d\n", getmultiplier(9871));
}