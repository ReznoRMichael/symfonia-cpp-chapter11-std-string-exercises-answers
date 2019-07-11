#include <iostream>
#include <string>
#include "showTextLines.h"

using namespace std;

string multilineText("Here I have a text\nThat is just divided\ninto three lines\0");

int main()
{
    showTextLines( multilineText );

    return 0;
}
