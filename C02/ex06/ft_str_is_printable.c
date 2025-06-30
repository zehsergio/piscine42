/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 16:23:36 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/06/30 16:33:46 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return	(0);
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str1 = "aBcD&$";
	char	*str2 = "aBcD&$€";

	printf("%s est printable? %d\n", str1, ft_str_is_printable(str1));	
	printf("%s est printable? %d\n", str2, ft_str_is_printable(str2));
}