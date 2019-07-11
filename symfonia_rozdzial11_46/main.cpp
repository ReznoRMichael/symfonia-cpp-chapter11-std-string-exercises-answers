#include <iostream>
#include <string>
#include "inputFileNameTxt.h"

using namespace std;

string userInput;

int main()
{
    // ask for .txt filename input and save into a string
    userInput = inputFileNameTxt();

    // check if the returned value has a valid .txt extension
    cout << userInput << endl;

    return 0;
}
