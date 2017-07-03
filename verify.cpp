#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool email_address_validation(string test)
{
    bool email_valid = false;
    for (int counter = 0; counter < test.length();counter++)
    {
        if (test[counter] == '@')
        {
            email_valid = true;
        }
    }
    return email_valid;
}

bool email_address_validation_2(string test2)
{
    bool email_valid2 = false;
    for (int counter2 = 0; counter2 < test2.length();counter2++)
    {
        if (test2[counter2] == '.')
        {
            email_valid2 = true;
        }
    }
    return email_valid2;
}

int main ()
{
    string email_address;
    cout << "Enter your email address\n";
    getline(cin, email_address);
    if(!email_address_validation(email_address))
    {
        cout << "Missing @ symbol\n";
        return 0;
    }
    int atsymbol_starts = email_address.find_first_of('@');
    string domain = email_address.substr(email_address.length() - atsymbol_starts, atsymbol_starts + 1);
    if(!email_address_validation_2(domain))
    {
        cout << "Missing . symbol after @\n";
        return 0;
    }

    cout << "Email accepted.\n";
    return 0;
}
