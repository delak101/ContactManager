#include "Email.h"

Email::Email()
{
    //ctor
}

Email::Email(string email_number, string email_type, string email_desc)
{
    //my ctor
    setEmail(email_number);
    setType(email_type);
    setDesc(email_desc);
}

Email::~Email()
{
    //dtor
}

void Email::setEmail(string email_number)
{
    m_email = email_number;
}
void Email::setType(string email_type)
{
    m_type = email_type;
}
void Email::setDesc(string email_desc)
{
    m_description = email_desc;
}

bool Email::isMatch(string key) const
{
    return (m_email.compare(key)==0);
}

void Email::print() const
{
    cout << "Email Number: " << m_email << endl
         << "Type: " << m_type << endl
         << "Description: " << m_description << endl;
}
