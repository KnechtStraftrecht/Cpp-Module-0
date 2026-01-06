/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:23 by KnechtStraf       #+#    #+#             */
/*   Updated: 2026/01/06 16:04:27 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "phonebook.hpp"

void	printColumnStr(std::string str);
int		ft_checkNumber(std::string str);
int		checkIndexInput(std::string input);

class	Contact{
	private:
		std::string	Secret;
		std::string	Name;
		std::string	LastName;
		std::string	Nickname;
		std::string	Number;

	public:
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
		std::string	getName() {
			return (this->Name);
		}
		std::string	getLastName() {
			return (this->LastName);
		}
		std::string	getNickname() {
			return (this->Nickname);
		}
		std::string	getNumber() {
			return (this->Number);
		}
		std::string	getSecret() {
			return (this->Secret);
		}
		void	setName() {
			std::cout << "Name: ";
			std::getline(std::cin, this->Name);
			if (this->Name.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
		}
		void	setLastName() {
			std::cout << "Last Name: ";
			std::getline(std::cin, this->LastName);
			if (this->LastName.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
		}
		void	setNickname() {
			std::cout << "Nickname: ";
			std::getline(std::cin, this->Nickname);
			if (this->Nickname.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
		}
		void	setNumber() {
			std::string	tmp;

			std::cout << "Number: ";
			std::getline(std::cin, tmp);
			if (tmp.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
			while (ft_checkNumber(tmp)) {
				std::cout << "Invalid format! Please reenter!\n";
				std::cout << "Number: ";
				std::getline(std::cin, tmp);
				if (tmp.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
			}
			this->Number = tmp;
		}
		void	setSecret() {
			std::cout << "Secret: ";
			std::getline(std::cin, this->Secret);
			if (this->Secret.empty())
			{
				std::cout << "\nExiting...\n";
				exit(1);
			}
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
			std::string	lookup;
			int			Index;

			std::cout << " ___________________________________________\n";
			std::cout << "|Index     |First Name|Last Name |Nickname  |\n";
			for (int i = 0; i < 8; i++) {
				std::cout << '|' << i << "         |";
				printColumnStr(Contacts[i].getName());
				printColumnStr(Contacts[i].getLastName());
				printColumnStr(Contacts[i].getNickname());
				std::cout << '\n';
			}
			std::cout << " -------------------------------------------\n";
			std::cout << "Index to look up: ";
			while (std::getline(std::cin, lookup)) {
				Index = checkIndexInput(lookup);
				if (Index >= 0 && Index <= 8)
					break;
				std::cout << "Invalid! Please put in a Number from 0 to 8!\n";
				std::cout << "Index to look up: ";
			}
			if (Index >= 0 && Index <= 8) {
				Contacts[Index].printName();
				std::cout << '\n';
				Contacts[Index].printLastName();
				std::cout << '\n';
				Contacts[Index].printNickname();
				std::cout << '\n';
				Contacts[Index].printNumber();
				std::cout << '\n';
				Contacts[Index].printSecret();
				std::cout << '\n';
			}
		}
};

#endif
