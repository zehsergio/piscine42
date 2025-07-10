#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

int main(void)
{
	char *str = "  -1234abc";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}