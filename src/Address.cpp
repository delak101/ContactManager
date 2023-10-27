#include "Address.h"

Address::Address()
{
    //ctor
}

Address::Address(string address_number, string address_type, string address_desc)
{
    //my ctor
    setAddress(address_number);
    setType(address_type);
    setDesc(address_desc);
}

Address::~Address()
{
    //dtor
}

void Address::setAddress(string address_number)
{
    m_address = address_number;
}
void Address::setType(string address_type)
{
    m_type = address_type;
}
void Address::setDesc(string address_desc)
{
    m_description = address_desc;
}

bool Address::isMatch(string key) const
{
    return (m_address.compare(key)==0);
}

void Address::print() const
{
    cout << "Address Number: " << m_address << endl
         << "Type: " << m_type << endl
         << "Description: " << m_description << endl;
}
