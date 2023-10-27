#include "Contact.h"

Contact::Contact(int contact_size)
{
    //ctor
    m_size = contact_size;
    m_users = new User[m_size];
    m_count = 0;
}

Contact::~Contact()
{
    //dtor
    delete [] m_users;
}

void Contact::AddUser()
{
    User * new_user = new User();
    new_user->setUserId(m_count+1);
    new_user->readInput();
    m_users[m_count++] = * new_user;
}

void Contact::DeleteUser(int user_id)
{
    if(m_count==0)
    {
        cout << "NO USER EXIST!\n";
        return;
    }
    bool deleted = false;

    for(int i=0; i<m_count; ++i)
    {
        if(m_users[i].getUserId()==user_id)
        {
            //delete from array
            if(i==m_count-1)
            {
                m_count--;
            }
            else
            {
                //replace deleted with last user
                m_users[i] = m_users[m_count-1];
                m_count--;
            }
            deleted = true;
            break;
        }
    }
    if (deleted)
    {
        cout << "USER DELETED SUCCESSFULLY!\n";
    }
    else
    {
        cout << "NO USER EXIST\n";
    }
}
void Contact::EditUser(int user_id)
{
    if(m_count==0)
    {
        cout << "NO USER EXIST!\n";
        return;
    }
    bool edited = false;

    for(int i=0; i<m_count; ++i)
    {
        if(m_users[i].getUserId()==user_id)
        {
            //edited from array
            m_users[i].readInput();
            edited = true;
            break;
        }
    }
    if(edited)
    {
        cout << "USER EDITED SUCCESSFULLY!\n";
    }
    else
    {
        cout << "NO USER EXIST\n";
    }

}
void Contact::print()const
{
    if(m_count==0)
    {
        cout << "NO USER FOUND!\n";
        return;
    }
    for(int i=0; i<m_count; ++i)
    {
        m_users[i].print();
    }
}
void Contact::ShowAll(string key)const
{
    int found_counter=0;
    for(int i=0; i<m_count; ++i)
    {
        if(m_users[i].findAny(key))
        {
            m_users[i].print();
            found_counter++;
        }
    }
    if(found_counter==0)
    {
        cout << "NO USER FOUND!\n";
    }
    else
    {
        cout << found_counter << " Found~\n";
    }
}
