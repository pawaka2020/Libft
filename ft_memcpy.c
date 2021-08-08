#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	if ((char *)src != (char *)dst)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
int main () 
{
char str [] = "stackoverflow";
    char *str2; 
		char *str3;
    str2 = str;
    str3 = str;
    puts(str);
    ft_memcpy(str2+5, str2, 7);
    puts(str2);
    ft_memmove(str3+5, str3, 7);
    puts(str3);
    return 0;
}
*/
