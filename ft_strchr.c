#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)s + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
void test(int c)
{
	const char str[] = "abcde123";
	printf("strchr: String starting from %c is: %s\n", c, strchr(str, c));
	printf("strchr: String starting from %c is: %s\n\n", c, ft_strchr(str, c));
}
int main () {
	int i = 32;
	while (i < 127)
		test(i++);
}
*/