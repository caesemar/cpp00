/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocasado <jocasado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:13:51 by jocasado          #+#    #+#             */
/*   Updated: 2024/10/16 18:34:24 by jocasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>
    class contacts
    {
        public:
            void setter(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
            std::string get_first_name();
            std::string get_last_name();
            std::string get_nickname();
            std::string get_phone_number();
            std::string get_darkest_secret();
        private:
            std::string _first_name;
            std::string _last_name;
            std::string _nickname;
            std::string _phone_number;
            std::string _darkest_secret;
    };

#endif