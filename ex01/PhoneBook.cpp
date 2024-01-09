#include "PhoneBook.class.hpp"

void	affList()
{
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "|  index  ";
	std::cout << "|  Prénom  ";
	std::cout << "|  Nom de famille  ";
	std::cout << "|  Surnom  |" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;

}

void	PhoneBook::Search()
{
	for (int i = 0; i < 8; i++)
	{
		this->_contact[i].list();
	}
}

void    PhoneBook::Add()
{
        int     i;

        i = 0;
        while ((i % 8) < 8)
        {
                if (i >= 8)
                {
                        std::cout << "La liste de contact est complète, le plus vieux contact sera remplacé par le nouveau." << std::endl;
                        this->_contact[i % 8].clearContact();
                        this->_contact[i % 8].addContact(i % 8);
                        return ;
                }
                else if (this->_contact[i].isEmpty())
                {
                        this->_contact[i].addContact(i);
                        return ;
                }
                i++;
        }
}

void	PhoneBook::Aff(int i)
{
	if (this->_contact[i].isEmpty())
	{
		std::cout << "Ce contact n'existe pas!" << std::endl;
		return ;
	}
	this->_contact[i].affContact();
	return ;
}

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}