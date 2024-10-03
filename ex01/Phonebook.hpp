/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:26:55 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/03 19:41:43 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include "Contacts.hpp"

class Phonebook
{
    public:
        Phonebook();
        ~Phonebook();
        int Add(int _index);
        void Search(int _index);
        void Exit();
    private:
        contacts _contacts[8];
};

Phonebook::Phonebook()
{
    std::cout << "This program works like a phone book\n"<< "Use:\n-ADD: Adds a new contact to the PhoneBook\n-SEARCH: Searchs for already existing contacts\n-EXIT: Exit the program"<<std::endl;
}

Phonebook::~Phonebook()
{
}

#endif