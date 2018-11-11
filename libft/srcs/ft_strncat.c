/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: popanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:51:36 by popanase          #+#    #+#             */
/*   Updated: 2017/12/07 18:12:10 by popanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	j = 0;
	i = ft_strlen(s1);
	while (j < n && s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}
