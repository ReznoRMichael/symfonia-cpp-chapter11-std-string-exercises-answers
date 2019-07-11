#include <iostream>
#include <string>
#include "nkStyler.h"

using namespace std;

string someText("Little slight example input text.");

int main()
{
    cout << "Original text: " << endl;
    cout << someText << endl;

    cout << "Modified text: " << endl;
    cout << nkStyler( someText ) << endl;

    return 0;
}
