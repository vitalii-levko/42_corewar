/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: popanase <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:05:28 by popanase          #+#    #+#             */
/*   Updated: 2017/12/07 18:28:56 by popanase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (!ft_strncmp(s1, s2, n))
			return (1);
	}
	return (0);
}
