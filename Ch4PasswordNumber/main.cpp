#include <iostream>
#include <string>

using namespace std;

int main()
{


    string password;
    cout << "Enter password: " << "\n";
    getline (cin, password, '\n');
    if ( password == "1234" || password == "6789" )
    {
      cout << "login successful";
    }


else
{
    cout <<"Username or password not recognized. Please try again." << "/n";
    return 0;
}
}
