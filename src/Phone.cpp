#include "Phone.h"

Phone::Phone()
{
    //ctor
}
Phone::Phone(string phone_number, string phone_type, string phone_desc)
{
    //my ctor
    setPhone(phone_number);
    setType(phone_type);
    setDesc(phone_desc);
}

Phone::~Phone()
{
    //dtor
}
void Phone::setPhone(string phone_number)
{
    m_phone = phone_number;
}
void Phone::setType(string phone_type)
{
    m_type = phone_type;
}
void Phone::setDesc(string phone_desc)
{
    m_description = phone_desc;
}

bool Phone::isMatch(string key) const
{
    return (m_phone.compare(key)==0);
}

void Phone::print() const
{
    cout << "Phone Number: " << m_phone << endl
         << "Type: " << m_type << endl
         << "Description: " << m_description << endl;
}
