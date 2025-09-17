/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalabrad <dalabrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:28:01 by dalabrad          #+#    #+#             */
/*   Updated: 2025/09/17 14:38:47 by dalabrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	print_argument(char *arg)
{
	while (*arg)
	{
		if (std::isalpha(*arg))
			std::cout << (char)std::toupper(*arg);
		else
			std::cout << *arg;
		arg++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	argv++;
	while (*argv)
	{
		print_argument(*argv);
		argv++;
	}
	std::cout << std::endl;
	return (0);
}
