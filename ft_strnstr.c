/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merol <merol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:08:20 by merol             #+#    #+#             */
/*   Updated: 2024/10/22 17:09:44 by merol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len == 0)
		return (NULL);
	if (!needle[j] || (ft_strlen(needle) > len))
		return ((char *)haystack);
	
	while (haystack[i] && len != 0 && i <= len)
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
// 	while (i < len && (haystack[i] != '\0' ))
// 	{
// 		while (needle[j] != '\0' && (i + j) < len)
// 		{
//             if (haystack[i + j] != needle[j]) break ;
//             j++;
//         }
// 		if (needle[j] == '\0')
// 				{
//             return (char *)(haystack + i);
// Bulunduğunda haystack'ın adresini döner
//         	}

//         i++;  // Haystack içinde bir sonraki karaktere geç
//     }

//     return (NULL);  // Eğer needle bulunamazsa NULL döner
// }
// #include <stdio.h>

// int	main(void)
// {
// 	const char *haystack = "Hello, world!";
// 	const char *needle = "wo";

// 	char *result = ft_strnstr(haystack, needle, 13);
// 	if (result)
// 	{
// 		printf("Bulundu: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Bulunamadı.\n");
// 	}

// 	return (0);
// }