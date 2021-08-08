/*
like strchr.c but finds the last occurence of c instead
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(s);
	while (i++, i < len)
		if (s[len - 1 - i] == c)
			return ((char *)s + (len - 1 - i));
	return (0);
}
/*
#include <stdio.h>
void test(int c)
{
	const char str[] = "c12312c4";
	printf("strrchr: String starting from %c is: %s\n", c, strrchr(str, c));
	printf("ft_strchr: String starting from %c is: %s\n\n", c, ft_strrchr(str, c));
}
int main () {
	int i = 32;
	while (i < 127)
		test(i++);
}
*/
