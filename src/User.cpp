#include "User.h"

User::User()
{
    //ctor
    m_phone_size = 5;
    m_address_size = 5;
    m_email_size = 5;

    m_phones = new Phone[m_phone_size];
    m_addresses = new Address[m_address_size];
    m_emails = new Email[m_email_size];

    m_phone_count = 0;
    m_address_count = 0;
    m_email_count = 0;

    m_DateAdded = time(0);


    m_gender = 0;
    m_age = 0;
}

User::~User()
{
    //dtor
    delete [] m_phones;
    delete [] m_addresses;
    delete [] m_emails;
}

void User::print() const
{
    cout << "========================================\n";
    cout << "ID: " << m_id
         << "\tNAME: " << m_firstname << " " << m_lastname << endl;
    if(m_age>0)
    {
        cout << "AGE: " << m_age
             << "\tGender: " << (m_gender==0?"Male":"Female") << endl;
    }
    if(m_phone_count>0)
    {
        cout << "PHONE NUMBERS:\n";
        for(int i=0; i<m_phone_count; ++i)
        {
            cout << i+1 << " - ";
            m_phones[i].print();
        }
    }
    if(m_address_count>0)
    {
        cout << "ADDRESSES:\n";
        for(int i=0; i<m_address_count; ++i)
        {
            cout << i+1 << " - ";
            m_addresses[i].print();
        }
    }
    if(m_email_count>0)
    {
        cout << "EMAILS:\n";
        for(int i=0; i<m_email_count; ++i)
        {
            cout << i+1 << " - ";
            m_emails[i].print();
        }
    }
    cout << "========================================\n";
}

void User::readInput()
{
    cout << "ENTER USER INFORMATION:\n";
    cout << "First Name: ";
    cin >> m_firstname;

    cout << "Last Name: ";
    cin >> m_lastname;

    cout << "Age: ";
    cin >> m_age;

    cout << "Gender (0-male, 1-female): ";
    cin >> m_gender;

    int n=0; //number of phone numbers
    cout << "How Many Phone Numbers?\n";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; ++i)
    {
        cout << "========================================\n";
        string num, type, desc;

        cout << "Phone Number ("<< i+1 << "): ";
        cin >> num;

        cout << "Type: ";
        cin >> type;

        cout << "Description: ";
        cin >> desc;

        //create new object
        Phone * new_phone = new Phone(num,type,desc);
        //store phone in array
        m_phones[m_phone_count++] = *new_phone;
    }
    ////////////////////////////////////////////////////
    n=0; //number of addresses
    cout << "How Many Addresses?\n";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; ++i)
    {
        cout << "========================================\n";
        string addr, type, desc;

        cout << "Address ("<< i+1 << "): ";
        cin >> addr;

        cout << "Type: ";
        cin >> type;

        cout << "Description: ";
        cin >> desc;

        //create new object
        Address * new_address = new Address(addr,type,desc);
        //store addresses in array
        m_addresses[m_address_count++] = *new_address;
    }
    /////////////////////////////////////////////////////////
    n=0; //number of Emails
    cout << "How Many Emails?\n";
    cin >> n;
    cin.ignore();

    for(int i=0; i<n; ++i)
    {
        cout << "========================================\n";
        string ems, type, desc;

        cout << "Email ("<< i+1 << "): ";
        cin >> ems;

        cout << "Type: ";
        cin >> type;

        cout << "Description: ";
        cin >> desc;

        //create new object
        Email * new_email = new Email(ems,type,desc);
        //store emails in array
        m_emails[m_email_count++] = *new_email;
    }
}

void User::setUserId(int id)
{
    m_id = id;
}
void User::setFirstName(string fname)
{
    m_firstname = fname;
}
void User::setLastName(string lname)
{
    m_lastname = lname;
}
void User::setAge(int age)
{
    m_age = age;
}
void User::setGender(int gender)
{
    m_gender = gender;
}

int User::getUserId()const
{
    return m_id;
}
bool User::findAny(string key) const
{
    if(m_firstname.compare(key)==0 || m_lastname.compare(key)==0)
        return true;
    if(m_phone_count>0)
    {
        for(int i=0; i<m_phone_count; ++i)
        {
            if(m_phones[i].isMatch(key))
                return true;
        }
    }
    if(m_address_count>0)
    {
        for(int i=0; i<m_address_count; ++i)
        {
            if(m_addresses[i].isMatch(key))
                return true;
        }
    }
    if(m_email_count>0)
    {
        for(int i=0; i<m_email_count; ++i)
        {
            if(m_emails[i].isMatch(key))
                return true;
        }
    }
    /**
    *  solution to warning
    *  warning: control reaches end of non-void function [-Wreturn-type]
    *  return 0;
    */
    //return 0;
}


