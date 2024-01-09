#include "PhoneBook.class.hpp"

int     main(void)
{
        PhoneBook       Book;

        std::string     action;
        std::cout << "\033[1;31m /********** Bienvenue sur le PhoneBook **********/ \033[0m" << std::endl;
        std::cout << "Veuillez entrer une commande (ADD, SEARCH, EXIT):\033[0m" << std::endl;
        while (42)
        {
                if (!std::getline(std::cin, action))
                {
                        std::cout << "Erreur: une erreur a été détectée." << std::endl;
                        exit(1);
                }
                if (action == "EXIT")
                        exit(0);
                else if (action == "ADD")
                {
			Book.Add();
                }
                else if (action == "SEARCH")
                {   
			std::cout << "Quel contact voulez-vous voir ?" << std::endl;
			affList();
			Book.Search();
                        std::cout << "Veuillez entrer l'index du contact que vous voulez voir:" << std::endl;
			while (42)
			{
				if (!std::getline(std::cin, action))
					exit (1);
				if (action == "EXIT")
					break ;
				if (checkItem(action) == true && atoi(action.c_str()) < 9 && action != "")
					Book.Aff(atoi(action.c_str()));
				else
					std::cout << "L'index que vous avez entrée est incorrecte ou n'existe pas." << std::endl;
				break ;
			}
                }
                else
                        std::cout << "\033[1;31m Erreur: la commande entrée n'est pas bonne, veuillez réessayer.. (ADD, SEARCH, EXIT) \033[0m" << std::endl;
        }
}
