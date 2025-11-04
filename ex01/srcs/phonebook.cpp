/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:14 by KnechtStraf       #+#    #+#             */
/*   Updated: 2025/11/04 17:00:36 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	printColumnStr(std::string str) {
	if (str.length() > 10) {
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << '.';
	}
	else {
		std::cout << str;
		for (int i = 0; str.length() + i < 10; i++)
			std::cout << ' ';
	}
	std::cout << '|';
}

void	decider(Phonebook &Pb, std::string cmd) {
	if (cmd == "ADD")
		Pb.Add();
	else if (cmd == "SEARCH")
		Pb.Search();
	else
		std::cout << "Command unkown, try: ADD, SEARCH, EXIT\n";
}

int	main(void) {
	Phonebook	Pb;
	std::string	cmd;

	std::cout << "Phonebook: ";
	std::getline(std::cin, cmd);
	while (cmd != "EXIT") {
		decider(Pb, cmd);
		std::cout << "Phonebook: ";
		std::getline(std::cin, cmd);
	}
	return (0);
}