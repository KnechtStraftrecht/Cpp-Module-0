/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:27:03 by hkullert          #+#    #+#             */
/*   Updated: 2025/12/30 19:09:23 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	ft_checkNumber(std::string str) {
	for (int i = 0; str[i]; i++) {
		if (i == 0 && str[i] == '+')
			i++;
		if (str[i] >= 48 && str[i] <= 57 && str[i] != ' ')
			return (0);
	}
	return (1);
}

int	IsNumber(std::string input) {
	for (int i = 0; input[i]; i++) {
		if (input[i] >= 48 && input[i] <= 57)
			if (!input[i + 1] || input[i + 1] < 48 || input[i + 1] > 57)
				return (input[i] - 48);
		if (input[i + 1] && input[i] > 48 && input[i] <= 57 && input[i + 1] >= 48 && input[i+ 1] <= 57)
			return (-1);
	}
	return (-1);
}

int	checkIndexInput(std::string input) {
	int	Index;

	Index = IsNumber(input);
	if (Index >= 0 && Index <= 8)
		return (Index);
	return (-1);
}
