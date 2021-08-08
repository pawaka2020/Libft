/*
DESCRIPTION
     The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the copy is always done in a non-
     destructive manner.

RETURN VALUES
     The memmove() function returns the original value of dst.
*/
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}
/*
#include <stdio.h>
int main () {
	char str[5] = "abcde";
	printf("str+2 = %s\n", str+2);
	char *str2 = memmove(str+2, str, 3);
	printf("After memcpy dest = %s\n", str);
	printf("After memcpy, ft_memmove = %s\n", str2);
}
*/
