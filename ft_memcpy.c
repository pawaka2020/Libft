//dst and src overlap = dst and src the same, so it might result in output =! logical output aka undefined behavior
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
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst)
}



#include <stdio.h>
int main () 
{
	// char str[5] = "abcde";
	// printf("str+2 = %s\n", str+2);
	// char *str2 = memcpy(str+2, str, 3);
	// printf("After memcpy dest = %s\n", str);
	// printf(":memcpy = %s\n", str2);
	//ababc
	//abc
	  char str [] = "stackoverflow";
    char *str2; 
		char *str3;
    str2 = str;
    str3 = str;
		//overwrite the 'overflow' part of 'stackoverflow' with the first 7 letters of stackoverflow, that is stackov
		//memcopy shows stackstackovw because stackoverflow -> stackxxxxxxxw -> stackstakovw 
		//memmove shows stackstackstw because stackoverflow -> stacksverflow -> stacksterflow -> stackstarflow -> stackstacflow -> stackstacklow -> stackstackstw
		//fix ft_memcpy
    puts(str);
    ft_memcpy(str2+5, str2, 7);
    puts(str2);
    ft_memmove(str3+5, str3, 7);
    puts(str3);
    return 0;
}
