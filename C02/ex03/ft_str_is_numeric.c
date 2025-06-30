/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:41:45 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/30 15:41:45 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		// Si string n'est pas compris entre '0' et '9', le retour est 0
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	// S'il n'y a pas de correspondance sans nombres, le retour est 1
	return (1);
}

/*
int main(void)
{
	char	*str1 = "0123456789";
	char	*str2 = "o123456789";
	printf("%s est numerique? %d\n", str1, ft_str_is_numeric(str1));
	printf("%s est numerique? %d\n", str2, ft_str_is_numeric(str2));
}
*/