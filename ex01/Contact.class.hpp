#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <string>

class Contact
{
        private:
                int             _index;
                std::string     _FirstName;
                std::string     _LastName;
                std::string     _Nickname;
                std::string     _PhoneNumber;
                std::string     _DarkestSecret;
        public:
                Contact();
                ~Contact();
                bool    isEmpty(void) const;
                void    addContact(int i);
                void    clearContact(void);
                void    affContact(void) const;
                void    list(void) const;

};

#endif