/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:14 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/01/06 17:21:41 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <csignal>
#include <stdlib.h>

void	sigQuitHandler (int sig) {
	(void)sig;
}

void	sigIntHandler (int sig) {
	(void)sig;
	std::cout << std::endl << "Exiting...\n";
	exit(1);
}



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

	signal(SIGINT, sigIntHandler);
	signal(SIGQUIT, sigQuitHandler);
	std::cout << "Phonebook: ";
	if (!std::getline(std::cin, cmd))
	{
		std::cout << "Exiting...\n";
		exit(1);
	}
	while (cmd != "EXIT") {
		if (!cmd.empty())
			decider(Pb, cmd);
		std::cout << "Phonebook: ";
		if (!std::getline(std::cin, cmd))
		{
			std::cout << "Exiting...\n";
			exit(1);
		}
	}
	std::cout << "All Information lost... Exiting\n";
	return (0);
}
