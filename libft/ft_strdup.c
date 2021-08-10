/*
ft_strdup:     [OK] [OK] [OK] [KO] [OK] [OK] [OK]
[KO]: your strdup did not allocate the good size so the \0 test may be false
Test code:
char *str;
char *tmp = "this is a normal test";
int r_size = strlen(tmp);
int size;

str = ft_strdup(tmp);
size = get_last_malloc_size();
if (size == r_size + 1)
exit(TEST_SUCCESS);
exit(TEST_KO);

Diffs:
strdup: |22|
ft_strdup: |21|
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
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
