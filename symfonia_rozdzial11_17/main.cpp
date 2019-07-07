#include <iostream>
#include <string>

using namespace std;

int main()
{
    string star("Some stars here");

    char character;

    // operator [] will not check if the position is valid - here the program just crashes
    character = star[25000];

    // at() member function checks if the position is valid and closes the program if not (throws exception)
    character = star.at(25000);

    cout << "String length: " << star.length();

    return 0;
}
