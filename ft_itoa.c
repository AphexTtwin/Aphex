/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haallaou <haallaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:09:41 by haallaou          #+#    #+#             */
/*   Updated: 2024/11/12 17:00:19 by haallaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intcount(int n)
{
	int	count;
	int	nipo;

	nipo = 0;
	count = 0;
	if (n < 0)
	{
		n *= -1;
		nipo = 1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	count += nipo;
	return (count);
}

static void	reversing(char str[], int len)
{
	int		start;
	int		end;
	char	khawi;

	start = 0;
	end = len - 1;
	while (start < end)
	{
		khawi = str[start];
		str[start] = str[end];
		str[end] = khawi;
		end--;
		start++;
	}
}

static int	handle_negative(int *n)
{
	int	niga;

	niga = 0;
	if (*n < 0)
	{
		niga = 1;
		*n = -(*n);
	}
	return (niga);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		niga;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc((intcount(n) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	niga = handle_negative(&n);
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	if (niga == 1)
		str[i++] = '-';
	str[i] = '\0';
	reversing(str, i);
	return (str);
}

// int main()
// {
// 	printf("%s\n", ft_itoa(0x80000000));
// }