/* --------------------------------------------------------------------------------------------- */
/* ----- deletes all file extensions from a filename in string, returns the new string ----- */
/* --------------------------------------------------------------------------------------------- */


#include "deleteFileExtension.h"

string deleteFileExtension( string inputString )
{
    const string extensionDot(1, '.');
    string::size_type lastDotPosition;
    bool foundExtension = false;

//    lastDotPosition = inputString.find_last_of( extensionDot );
//
//    if( lastDotPosition != string::npos )
//    {
//        foundExtension = true;
//
//        inputString.erase( lastDotPosition );
//
//        return inputString;
//    }
//    else
//    {
//        foundExtension = false;
//
//        return inputString;
//    }


    // search for the dot and delete until no other dots are found
    while( lastDotPosition != string::npos )
    {
        lastDotPosition = inputString.find_last_of( extensionDot );

        if( lastDotPosition == string::npos ) break;
        else inputString.erase( lastDotPosition );
    }

    return inputString;


}
