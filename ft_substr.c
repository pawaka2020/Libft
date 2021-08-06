/*
returns substring of s. First char of substring is s[start]. Maximum length of substring is len
return 0 if allocation fails
*/
#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	char *sub2;
	size_t i;

	sub = ft_strdup(s+start);
	if (len < ft_strlen(sub))
	{
		sub2 = malloc(len);
		if (sub2 == 0)
			return (sub2);
		i = -1;
		while (i++, i < len)
			sub2[i] = sub[i];
		free(sub);
		return (sub2);
	}
	return (sub);
}
/*
int	main(void)
{
	char *str = "Hello World!";
	char *str2 = ft_substr(str, 6, 3);
	printf("%s\n", str2);
}
*/
