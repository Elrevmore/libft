/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:29:58 by merol             #+#    #+#             */
/*   Updated: 2024/10/27 18:31:44 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t strlength;
	strlength = ft_strlen(s);
	char *result;

	if (start < 0)
		start = strlength + start;

	if (start >= strlength)
		start = len - start;

	result = ft_calloc((len + 1) * sizeof(char));
	
	size_t i;
	i = 0;
	while(i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	return (result);
	
}

// #include <stdio.h>
// int main() {
//     char str[] = "hwllo ,world Ömer Faruk Göregen";
// 	printf("%s", ft_substr(str, 0, 10));
// }
