#include "libft.h"
//same as strncmp but directly to memory (void *)
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*_s1;
	char	*_s2;	
	
	i = 0;
	_s1 = (char *)s1;
	_s2 = (char *)s2;
	if (n == 0)
		return (0);
	while (_s1[i] && _s1[i] == _s2[i] && i < n - 1)
		i++;
	return ((unsigned char)_s1[i] - (unsigned char)_s2[i]);


	return (0);	
}
/*
#include <stdio.h>
int	main(void)
{
	char *str1 = "ABCez";
	char *str2 = "ABCde";
	int n = 5;
	int k = ft_memcmp(str1, str2, n);
	printf("%d\n", k);
	int l = memcmp(str1, str2, n);
	printf("%d\n", l);
}
*/