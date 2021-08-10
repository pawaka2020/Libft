/*
copies len bytes from string src to string dst, non-destructive manner.
len must not exceed size of dst

RETURN VALUES
     The memmove() function returns the original value of dst.
*/
/*
[crash]: your memmove does not well with NULL as both parameters and size
Test code:
ft_memmove(((void *)0), ((void *)0), 5);
*/
//for nondestructive copying, copy in reverse direction
//if dst > src 
#include "libft.h"

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	unsigned char	*dst2;
// 	unsigned char	*src2;
// 	size_t	i;

// 	dst2 = (unsigned char *)dst;
// 	src2 = (unsigned char *)src;
// 	i = 0;
// 	if (dst == src || len == 0)
// 		return (dst);
// 	else if (dst > src)
// 		while (len-- > 0)
// 			dst2[len] = src2[len];
// 	else
// 	{
// 		while (i < len)
// 		{
// 			dst2[i] = src2[i];
// 			i++;
// 		}
// 	}
// 	return (dst);
// }

#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	unsigned char		*src2;

	if (dst == src || len == 0)
		return (dst);
	else if (dst < src)
	{
		dst2 = (unsigned char *)dst;
		src2 = (unsigned char *)src;
		while (len--)
			*dst2++ = *src2++;
	}
	else if (dst > src)
	{
		dst2 = (unsigned char *)dst + (len - 1);
		src2 = (unsigned char *)src + (len - 1);
		while (len--)
			*dst2-- = *src2--;
	}
	return (dst);
}
/*
void test(char *dst, char *src, size_t len)
{
	memmove(dst, src, len);
	printf("After ft_memmove: %s\n", dst);
}
int main () {
   char dest[] = "abcde";
   const char src[]  = "1234567";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}
*/
