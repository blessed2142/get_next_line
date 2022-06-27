/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphoebe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:43:49 by rphoebe           #+#    #+#             */
/*   Updated: 2020/12/12 13:29:33 by rphoebe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*ss1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	if (!(ss1 = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (s1[j] != '\0')
	{
		ss1[j] = s1[j];
		j++;
	}
	ss1[j] = '\0';
	return (ss1);
}

char	*till_n(char *src)
{
	char	*dst;
	int		i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != '\n')
		i++;
	if (!(dst = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0' && src[i] != '\n')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*n_till(char *src)
{
	char	*dst;
	int		i;
	int		j;

	if (!src)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] != '\0' && src[i] != '\n')
		i++;
	if (src[i] == '\0')
	{
		free(src);
		return (NULL);
	}
	if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(src) - i))))
		return (NULL);
	i = i + 1;
	while (src[i] != '\0')
		dst[j++] = src[i++];
	dst[j] = '\0';
	free(src);
	return (dst);
}

int		ft_strlen(const char *str)
{
	int i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	if (!s)
		return (NULL);
	if ((char)c == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return (ss + i);
	}
	else
	{
		while (*s)
		{
			if (*s++ == (char)c)
				return (ss + i);
			i++;
		}
	}
	return (NULL);
}
