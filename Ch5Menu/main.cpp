#include <iostream>

using namespace std;

int main()
{

    int menu_choice;
    while ( menu_choice > 5)
    {
        cout << "Welcome To Bedlam DL3. Choose one of the following e-mail responses:" << endl;
        cout << "Press 1 to ask what this alias is for, and why am I on it?" << endl;
        cout << "Press 2 to request to be removed from this alias." << endl;
        cout << "Press 3 to shout STOP REPLYING ALL and flag the message as IMPORTANT." << endl;
        cout << "Press 4 to send a face palm Gif to everybody."<< endl;
        cout << "Press 5 to set up a rule to move this thread to the Junk folder."<< endl;
        cin >> menu_choice;
    }

}
