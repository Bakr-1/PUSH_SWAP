/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalseri <aalseri@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:40:45 by aalseri           #+#    #+#             */
/*   Updated: 2022/09/12 18:04:24 by aalseri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

size_t	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(null)";
	}
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

size_t	ft_redirect(const char *str, va_list ptr)
{
	size_t	len;

	len = 0;
	if (*str == 'd')
		len += ft_putnbr(va_arg(ptr, int));
	else if (*str == 'c')
		len += ft_putchar(va_arg(ptr, int));
	else if (*str == 'u')
		len += ft_putnbr_un(va_arg(ptr, unsigned int));
	else if (*str == 's')
		len += ft_putstr(va_arg(ptr, char *));
	else if (*str == 'i')
		len += ft_putnbr(va_arg(ptr, int));
	else if (*str == '%')
		len += ft_putchar('%');
	else if (*str == 'x' || *str == 'X')
		len += ft_puthexa(va_arg(ptr, unsigned int), *str);
	else if (*str == 'p')
		len += ft_putpointer(va_arg(ptr, unsigned long long));
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	size_t	len;
	int		i;

	va_start(ptr, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_redirect(&str[i + 1], ptr);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(ptr);
	return (len);
}

/* this would output any base
size_t	ft_putnbr_base(int nbr, int len, char *base)
{
	size_t	length;

	length = 0;
	if (nbr < len)
	{
		length += ft_putchar(base[nbr]);
	}
	else
	{
		length += ft_putnbr_base(nbr / len, len, base);
		length += ft_putchar(base[nbr % len]);
	}
	return (length);
}
*/
