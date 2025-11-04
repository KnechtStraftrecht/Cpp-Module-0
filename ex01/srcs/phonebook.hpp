/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:23 by KnechtStraf       #+#    #+#             */
/*   Updated: 2025/11/04 17:04:49 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "phonebook.hpp"

void	printColumnStr(std::string str);

class	Contact{
	private:
		std::string	Secret;

	public:
		std::string	Name;
		std::string	LastName;
		std::string	Nickname;
		std::string	Number;

		unsigned long	printName() {
			std::cout << "First Name: " << this->Name;
			return this->Name.length();
		};
		unsigned long	printLastName() {
			std::cout << "Last Name: " << this->LastName;
			return this->LastName.length();
		}
		unsigned long	printNickname() {
			std::cout << "Nickname: " << this->Nickname;
			return (this->Nickname.length());
		}
		unsigned long	printNumber() {
			std::cout << "Number: " << this->Number;
			return this->Number.length();
		}
		unsigned long	printSecret() {
			std::cout << "Darkest Secret: " << this->Secret;
			return (this->Secret.length());
		}
		void	setName() {
			std::cout << "Name: ";
			std::getline(std::cin, this->Name);
		}
		void	setLastName() {
			std::cout << "Last Name: ";
			std::getline(std::cin, this->LastName);
		}
		void	setNickname() {
			std::cout << "Nickname: ";
			std::getline(std::cin, this->Nickname);
		}
		void	setNumber() {
			std::cout << "Number: ";
			std::getline(std::cin, this->Number);
		}
		void	setSecret() {
			std::cout << "Secret: ";
			std::getline(std::cin, this->Secret);
		}
};

class	Phonebook{
	private:
		int			SaveIndex = 0;
		Contact		Contacts[8];

	public:
		void	Add() {
			Contact	NewContact;
			
			NewContact.setName();
			NewContact.setLastName();
			NewContact.setNickname();
			NewContact.setNumber();
			NewContact.setSecret();
			this->Contacts[this->SaveIndex % 8] = NewContact;
			SaveIndex++;
		}
		void	Search() {
			int	lookup;

			std::cout << " ___________________________________________\n";
			std::cout << "|Index     |First Name|Last Name |Nickname  |\n";
			for (int i = 0; i < 8; i++) {
				std::cout << '|' << i << "         |";
				printColumnStr(Contacts[i].Name);
				printColumnStr(Contacts[i].LastName);
				printColumnStr(Contacts[i].Nickname);
				std::cout << '\n';
			}
			std::cout << " -------------------------------------------\n";
			std::cout << "Index to look up: ";
			std::cin >> lookup;
			std::cin.ignore();
			if (lookup >= 0 && lookup <= 8) {
				Contacts[lookup].printName();
				std::cout << '\n';
				Contacts[lookup].printLastName();
				std::cout << '\n';
				Contacts[lookup].printNickname();
				std::cout << '\n';
				Contacts[lookup].printNumber();
				std::cout << '\n';
				Contacts[lookup].printSecret();
				std::cout << '\n';
			}
		}
};

#endif