#include "inputFileNameTxt.h"

/* -- inputFileNameTxt() asks for the filename
if the filename doesn't have .txt as an extension
then it replaces the extension (or adds it), and returns the valid filename -- */

string inputFileNameTxt()
{
    // helpers
    string inputFileName;
    const string lastDot(1, '.');
    const string fileExtensionName("txt");
    string::size_type lastDotPosition;
    string::size_type foundExtensionPosition;

    // ask for the filename
    cout << "Please enter the file name (with .txt): " << endl;
    getline( cin, inputFileName );

    // find the last extension position
    lastDotPosition = inputFileName.find_last_of( lastDot );

    // if the filename has an extension
    if( lastDotPosition != string::npos )
    {
        // check if the last extension is valid
        foundExtensionPosition = inputFileName.find( fileExtensionName, lastDotPosition );

        // if it's valid, return the original input
        if( foundExtensionPosition != string::npos )
        {
            return inputFileName;
        }
        // if it's not valid, replace the last extension with the valid extension and return it
        else
        {
            inputFileName.erase( lastDotPosition );
            inputFileName += lastDot + fileExtensionName;

            return inputFileName;
        }
    }
    // if the filename doesn't have an extension just add it
    else
    {
        inputFileName += lastDot + fileExtensionName;

        return inputFileName;
    }
}
