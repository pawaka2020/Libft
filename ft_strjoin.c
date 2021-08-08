/*
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(size);
	if (str == 0)
		return (str);
	ft_strlcat(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "Hello";
	char *str2 = " World!";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s\n", str3);
}
*/
