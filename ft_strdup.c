/*
returns copy of s1
*/
#include "libft.h"

char *ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = malloc(len);
	if (str == 0)
		return (str);
	ft_strlcpy(str, s1, len + 1);
	return (str);	
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "abcde";
	char *str2 = ft_strdup(str);
	printf("str2 = %s\n", str2);
}
*/

