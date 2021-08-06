/*
void *memset(void *b, int c, size_t len)
write len bytes of value c (converted to an unsigned char) to the string b.
since a string is made up of chars and a char is 1 byte, replace each char with character represented by c, starting from the 0th char in s
if the parameter is an array with memory defined (eg: char[50]), assigning a static array to it and then changing the values of the static array will affect the parameter as well.
*/
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
  size_t i;
	unsigned char	*str;

  i = 0;
	//str = (unsigned char *)b;
	str = b;
	while (i < len)
		//str[i++] = (unsigned char)c;
		str[i++] = c;
	return (b);
}
/*
//must declare with memory size if one intends to modify the str.
//apparently str* gives segmentation fault error if one attempts to modify it afterward
#include <string.h>
#include <stdio.h>
int main(void)
{
  char str[50] = "GeeksForGeeks is for programming geeks.";
  printf("\nBefore ft_memset(): %s\n", str);
  ft_memset(str + 13, '.', 8);
  printf("After ft_memset():  %s\n", str);
  return 0;
}
*/