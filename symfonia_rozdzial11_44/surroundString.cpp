/* ------------------------------------------------------------------------------------------------------------ */
/* ------------- function that surrounds each character in a string with [], returns the new string ----------- */
/* ------------------------------------------------------------------------------------------------------------ */

#include "surroundString.h"

void surroundString( string inputString )
{
    string outputString;
    string before(1, '[');
    string after(1, ']');

    for(unsigned int i=0; i < inputString.length(); i++ )
    {
        outputString += before + inputString.at(i) + after;
    }

    cout << outputString << endl;
}
