/*
return 8 if both ft_isalpha and ft_isdigit are true, otherwise return 0
*/
#include "libft.h"

// int ft_isdigit(int c)
// {
//   if (c >= '0' && c <= '9')
//     return (2048);
//   else 
//     return (0);
// }

// int ft_isalpha(int c)
// {
//   if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
// 		return (1024);
// 	else 
//     return (0);
// }

int ft_isalnum (int c)
{
  if (ft_isdigit(c) || ft_isalpha(c))
    return (8);
  else 
    return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
static void test(int c)
{
  int res = ft_isalnum(c);
  int res2 = isalnum(c);
  printf("value of ft_isalnum: %d\n", res);
  printf("value of isalnum: %d\n", res2);
  printf("the actual character is %c\n\n", c);
}
int main(void)
{
  int c;
  c = '0';
  while (c >= '0' && c <= 'A')
    test(c++);
  c = 'A';
  while (c >= 'A' && c <= 'Z')
    test(c++);
  c = 'a';
  while (c >= 'a' && c <= '~')
    test(c++);
}
*/