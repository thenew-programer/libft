/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouryal <ybouryal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:09 by ybouryal          #+#    #+#             */
/*   Updated: 2024/10/24 12:27:00 by ybouryal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*duplicate;
	size_t	len;
	size_t	i;

	if (!str || !str[0])
		return (NULL);
	len = ft_strlen(str);
	duplicate = (char *)malloc(sizeof(char) * len);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (i < len)
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}