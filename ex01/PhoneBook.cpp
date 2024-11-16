#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->count = 0;
    this->nb_contacts = 0;
}

void PhoneBook::add_new_contact(const Contact &contact)
{
    this->contacts[this->count % 8] = contact;
    this->count++;
    if (nb_contacts < 8)
        nb_contacts++;
    // check if mandatory to shift all array;
}