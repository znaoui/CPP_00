#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
# include <string>
# include <iostream>

void    affList();
bool	checkItem(std::string str);

class PhoneBook
{
        private:
                Contact _contact[8];
        public:
                PhoneBook();
		~PhoneBook();
                void    Add(void);
                void    Search(void);
                void    Aff(int i);
};

#endif