#include <iostream>
#include <string>

using namespace std;

int main()
{


    string username;
    string password;
    cout << "Enter your username: " << "\n";
    getline(cin, username, '\n');
    cout << "Enter your password: " << "\n";
    getline( cin, password , '\n' );
    //cout << "****" << "\n";
    if ( username == "Kevin" && password == "Dork" )
    {
      cout << "Login successful" << "\n";
    }
else if ( username == "Lori" && password == "Goddess" )
    {
      cout << "Login successful" << "\n";
    }
else

  {
   cout <<"Username or password not recognized. Please try again." << "\n";
  cout << "Enter your username: " << "\n";
    getline(cin, username, '\n');
    cout << "Enter your password: " << "\n";
    getline( cin, password , '\n' );
    cout << "****" << "\n";
    if ( username == "Kevin" && password == "Dork" )
    {
      cout << "Login successful" << "\n";
    }
else if ( username == "Lori" && password == "Goddess" )
    {
      cout << "Login successful" << "\n";
    }
   else
{
    cout <<"Username or password not recognized. Please try again." << "\n";
    cout << "Enter your username: " << "\n";
    getline(cin, username, '\n');
    cout << "Enter your password: " << "\n";
    getline( cin, password , '\n' );
    cout << "****" << "\n";
    if ( username == "Kevin" && password == "Dork" )
    {
      cout << "Login successful" << "\n";
    }
else if ( username == "Lori" && password == "Goddess" )
    {
      cout << "Login successful" << "\n";
    }
else

    cout <<"Username or password not recognized. This is your third unsuccessful attempt; please contact your system administrator for assistance." << "\n";

  }
}}

