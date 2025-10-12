/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 18:34:14 by KnechtStraf       #+#    #+#             */
/*   Updated: 2025/10/12 19:55:13 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
using namespace std;

void	decider(Phonebook& Phonebook, string& cmd) {
	if (cmd == "ADD")
		Phonebook.addContact;
	else if (cmd == "SEARCH")
		Phonebook.searchContact;
}

int main (void) {
	Phonebook	Phonebook;

	for (string cmd = cin << "PHONEBOOK: "; cmd && cmd != "EXIT") {
		decider(Phonebook, cmd);
	}
	return (0);
}