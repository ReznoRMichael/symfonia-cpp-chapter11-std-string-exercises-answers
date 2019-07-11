#include "nkStyler.h"

/* --------------------
Changes even characters in a string to Uppercase,
and odd characters to lowercase.
Returns the modified string.
-------------------- */

string nkStyler( string inputString )
{
    string::size_type inputStringLength = inputString.length();

    for( unsigned int i=0; i < inputStringLength; i++ )
    {
        if( i % 2 )
        {
            inputString.at(i) = toupper( inputString.at(i) );
        }
        else
        {
            inputString.at(i) = tolower( inputString.at(i) );
        }
    }

    return inputString;
}
