#include "PhoneBook.class.hpp"

bool	checkItem(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(isdigit(str[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

void	Contact::list(void) const
{
	if (this->_FirstName.compare("") == 0)
		return ;
	std::cout<< "|";
	for (int i = 0; i < 8; i++)
		std::cout << " ";
	std::cout << static_cast<int16_t>(_index) << "|";
	if (_FirstName.size() < 10)
	{
		for(int i = 0 + _FirstName.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->_FirstName << "|";
	}
	else
		std::cout << this->_FirstName.substr(0, 9) << ".|";
	if (_LastName.size() < 10)
	{
		for(int i = 0 + _LastName.size(); i < 18; i++)
			std::cout << " ";
		std::cout << this->_LastName << "|";
	}
	else
		std::cout << this->_LastName.substr(0, 17) << ".|";
	if (_Nickname.size() < 10)
	{
		for(int i = 0 + _Nickname.size(); i < 10; i++)
			std::cout << " ";
		std::cout << this->_Nickname << "|";
	}
	else
		std::cout << this->_Nickname.substr(0, 9) << ".|";
	std::cout << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
}

bool	Contact::isEmpty(void) const
{
	if (this->_FirstName.compare("") == 0)
		return (true);
	return (false);
}

Contact::Contact()
{
        this->_FirstName = "";
        this->_LastName = "";
        this->_Nickname = "";
        this->_PhoneNumber = "";
        this->_DarkestSecret = "";
}

Contact::~Contact()
{

};

void	Contact::affContact(void) const
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Informations du contact :" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Prénom : ";
	std::cout << this->_FirstName << std::endl;
	std::cout << "Nom de famille : ";
	std::cout << this->_LastName << std::endl;
	std::cout << "Surnom : ";
	std::cout << this->_Nickname << std::endl;
	std::cout << "Numéro de téléphone : ";
	std::cout << this->_PhoneNumber << std::endl;
	std::cout << "Secret : ";
	std::cout << this->_DarkestSecret << std::endl;
}

void    Contact::clearContact()
{
        this->_FirstName = "";
        this->_LastName = "";
        this->_Nickname = "";
        this->_PhoneNumber = "";
        this->_DarkestSecret = "";
}

void	Contact::addContact(int i)
{

	this->_index = i;
	while (this->_FirstName == "")
	{
		std::cout << "Prénom: ";
		if (!(std::getline(std::cin, this->_FirstName)))
			exit (0);
		if (this->_FirstName == "")
			std::cout << "Veuillez entrer une valeur valide." << std::endl;
	}
	while (this->_LastName == "")
	{
		std::cout << "Nom de famille: ";
		if (!(std::getline(std::cin, this->_LastName)))
			exit (0);
		if (this->_LastName == "")
			std::cout << "Veuillez entrer une valeur valide." << std::endl;
	}
	while (this->_Nickname == "")
	{
		std::cout << "Surnom: ";
		if (!(std::getline(std::cin, this->_Nickname)))
			exit (0);
		if (this->_Nickname == "")
			std::cout << "Veuillez entrer une valeur valide." << std::endl;
	}
	while (this->_PhoneNumber == "" || checkItem(_PhoneNumber) == false)
	{
		std::cout << "Numéro de téléphone: ";
		if (!(std::getline(std::cin, this->_PhoneNumber)))
			exit (0);
		if (this->_PhoneNumber == "" || checkItem(_PhoneNumber) == false)
			std::cout << "Veuillez entrer une valeur valide." << std::endl;
	}
	while (this->_DarkestSecret == "")
	{
		std::cout << "Ton secret: ";
		if (!(std::getline(std::cin, this->_DarkestSecret)))
			exit (0);
		if (this->_DarkestSecret == "")
			std::cout << "Veuillez entrer une valeur valide." << std::endl;
	}
	std::cout << "Le contact a été correctement crée." << std::endl;
}