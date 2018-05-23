#include <iostream>
using namespace std;
int main ()
{
for (int bottle (100); bottle > 0;) // bottle -=1)// variable declaration and initialization
//while ( bottle  > 0 ) // condition
{
         cout << bottle << " bottles on wall, " << endl;
        cout    << bottle << " bottles of beer." << endl;
         bottle -= 1;
       cout << "Take one down &  pass it around, "  << bottle << " " << endl;
         cout << "bottles of beer on wall.\n" << endl;

        if (bottle == 1)
        {
            break;
        }

    }

    cout << "1 bottle of beer on the wall, 1 bottle of beer." << endl
         << "Take one down and pass it around, no more bottles of beer on the wall.\n" << endl
         << "No more bottles of beer on the wall, no more bottles of beer." << endl
         << "Go to the store and buy some more, 99 bottles of beer on the wall.";

    return 0;
}
//This works except that in a regular MS-DOS command window it cannot display all 99 bottles list - it just shows 59 and down.
