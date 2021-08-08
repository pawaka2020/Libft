/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
#include "libft.h"

static void	flip(char *str)
{
	char	*str2;
	int		len;
	int		i;

	len = ft_strlen(str);
	str2 = malloc(len);
	if (str2 == 0)
		return ;
	i = -1;
	while (i++, str[i])
		str2[i] = str[i];
	i = -1;
	while (i++, i < len)
		str[i] = str2[len -1 - i];
	free(str2);
}

static int	setpos(char const *s1, char const *set)
{
	int		i;
	size_t	j;
	int		pos;

	i = -1;
	j = 0;
	pos = -1;
	while (i++, s1[i])
	{
		if (s1[i] == set[j])
		{
			if (pos == -1)
				pos = i;
			j++;
		}
		else
		{
			pos = -1;
			j = 0;
		}	
		if (j == ft_strlen(set) - 1)
			return (pos);
	}
	return (pos);
}

static void	trim(char *s1, char const *set)
{
	size_t	i;
	int		pos;

	i = -1;
	pos = setpos(s1, set);
	while (i++, i < ft_strlen(set))
		ft_strlcpy(&s1[pos], &s1[pos + 1], ft_strlen(s1) - 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*set2;

	str = ft_strdup(s1);
	set2 = ft_strdup(set);
	trim(str, set2);
	flip(str);
	flip(set2);
	trim(str, set2);
	flip(str);
	str = realloc(str, ft_strlen(str));
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "2e21312!!345!!67!!89";
	printf("result: %s\n",ft_strtrim(str, "!!"));
}
*/
