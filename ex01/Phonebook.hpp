/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:26:55 by jocasado          #+#    #+#             */
/*   Updated: 2024/07/24 19:37:39 by jocasado         ###   ########.fr       */
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
    std::cout << "This program works like a phone book\n"<< "Use:\n-Add: Adds a new contact to the PhoneBook\n-Search: Searchs for already existing contacts\n-Exit: Exit the program"<<std::endl;
    
}

Phonebook::~Phonebook()
{
}

#endif