#include "moduleNumber.h"

/* ------------------------
Returns the number of the module based on the string ending's letter.
If the module ending letter is not found, returns -1.
-------------------------*/

int moduleNumber( string inputName )
{
    const string moduleNameAffix("ABCDEFGJKLMNPQR");
    const string searchStart(1, '_');

    string::size_type foundStartPosition;
    string::size_type foundAffixPosition;

    // begin the search from the last underscore
    foundStartPosition = inputName.find_last_of( searchStart );
    // find the affix letter beginning from the last underscore
    foundAffixPosition = inputName.find_first_of( moduleNameAffix, foundStartPosition );

    // if the affix is found, then return the appriopriate module number based on the moduleNameAffix string
    if( foundAffixPosition != string::npos )
    {
        return moduleNameAffix.find_first_of( inputName.at( foundAffixPosition ) );
    }
    // if not, return -1
    else
    {
        return -1;
    }
}
