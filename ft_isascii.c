/*
tests for ascii characters (checked)
#include "libft.h"
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
void test(int c)
{
		int res = ft_isascii(c);
		int res2 = isascii(c);
    printf("ft_isascii value is %d\n", res);
    printf("isascii value is %d\n", res2);
    printf("the actual character is %c\n\n", c);
}
int	main(void)
{
	test(12);
	test(128);
}
*/

