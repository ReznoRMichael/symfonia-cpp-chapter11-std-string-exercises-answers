#include "analyzePolygonString.h"

/* ---------------------------------
Analyzes string for .poly extension and _polygon_ name
if the string contains both, then returns the substring between them
else returns empty string
-----------------------------------*/

string analyzePolygonString( string inputString )
{
    const string lastDot(1, '.');
    const string extensionName("poly");
    const string findName("_polygon_");
    string outputString = "";

    string::size_type lastDotPosition;
    string::size_type foundExtNamePosition;
    string::size_type foundNamePosition;
    string::size_type substrStartPosition; //
    string::size_type substrLength;

    lastDotPosition = inputString.rfind( lastDot );

    foundExtNamePosition = inputString.find( extensionName, lastDotPosition );

    if( foundExtNamePosition != string::npos )
    {
        // find polygon
        foundNamePosition = inputString.rfind( findName );

        if( foundNamePosition != string::npos )
        {
            // return substr
            substrStartPosition = foundNamePosition + findName.length();
            substrLength = lastDotPosition - substrStartPosition;

            return inputString.substr( substrStartPosition, substrLength );
        }
        else
        {
            return outputString;
        }
    }
    else
    {
        return outputString;
    }
}
