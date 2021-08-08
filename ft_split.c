#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	split = malloc(ft_strlen(s));
	if (split == 0)
		return (split);
	i = -1;
	j = -1;
	k = 0;
	while (i++, s[i])
	{
		if (s[i] != c && j == -1)
			j = i;
		if (s[i] == c && j != -1)
		{
			split[k] = ft_substr(s, j, i -j);
			j = -1;
			k++;
		}
	}
	split = realloc(split, k + 2);
	split[k] = 0;
	return (split);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "xxxxxhelloxxxxxxxxworldxxxxxhahxxxxxxxxxx";
	char **split = ft_split(str, 'x');
	int i  = -1;
	while (i++, split[i])
	{
		printf("%s\n", split[i]);
	}
}
*/
