/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:23 by KnechtStraf       #+#    #+#             */
/*   Updated: 2025/10/12 19:53:10 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
using namespace std;

class Phonebook {
	public:
		Contact	Contacts[8];
	
	void	Phonebook () {
		this.CurrIndx = 0;
		this.ContactsSaved = 0;
	}
	
	void	searchContacts() {
		string	RowTemplate;
		string	FilledRow;

		RowTemplate = "|          |          |          |          |";
		cout << "   Index    First Name  Last Name  Nickname  " << endl;
		for (int i = 0; i < this.ContactsSaved; i++) {
			FilledRow = RowTemplate;
			FilledRow.replace(1, 10, i);
			FilledRow.replace(12, 10, this.Contacts[i].FirstName);
			FilledRow.replace(23, 10, this.Contacts[i].LastName);
			FilledRow.replace(34, 10, this.Contacts[i].Nickname);
			cout << FilledRow << endl
		}
		cout << "Index to look up: ";
		cin >> int indx;
		cout << endl;
		this.printContact(this.Contacts[indx]);
	}

	void	printContact(Contact ToPrint) {
		cout << ToPrint.FirstName << endl;
		cout << ToPrint.LastName << endl;
		cout << ToPrint.Nickname << endl;
		cout << ToPrint.PhoneNumber << endl;
		ToPrint.revealSecret;
	}

	void	addContact() {
		Contact	newContact;

		cout << "Enter first name: ";
		getline(cin, newContact.FirstName);
		cout << "Enter last name: "
		getline(cin, newContact.LastName);
		cout << "Enter nickname: ";
		getline(cin, newContact.Nickname);
		cout << "Enter Number: ";
		cin >> Contact.PhoneNumber;
		newContact.getSecret;
		this.Contacts[CurrIndx] = newContact;
		this.CurrIndx++;
		if (this.ContactsSaved < 8)
			this.ContactsSaved++;
	}

	private:
		int		ContactsSaved;
		int		CurrIndx;
}

class Contact {
	public:
		string	FirstName;
		string	LastName;
		string	Nickname;
		int		PhoneNumber;
	
	void	revealSecret() {
		cout << this.Secret << endl;
	}

	void	getSecret() {
		cout << "Enter Secret: ";
		getline(cin, this.Secret);
	}

	private:
		string	Secret;
}

#endif