int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

#include <ctype.h>
#include <stdio.h>
void test(int i)
{
	printf("original character = %c\n", i);
	int j = toupper(i);
	printf("tolower result = %c\n", j);
	int k = ft_tolower(i);
	printf("ft_tolower result = %c\n\n", k);
}
int	main(void)
{
	int i = 32;
	while (i < 127)
		test(i++);
}
