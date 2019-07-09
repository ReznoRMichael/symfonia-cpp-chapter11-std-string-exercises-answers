#include "compareCI.h"

/* -------------- function comparing two strings (case-insensitive) ------------- */

int compareCI(string c1, string c2)
{
//    transform( c1.begin(), c1.end(), c1.begin(), tolower );
//    transform( c2.begin(), c2.end(), c2.begin(), tolower );

    for(unsigned int i=0; i < c1.length(); i++)
    {
        c1[i] = tolower( c1[i] );
    }
    for(unsigned int i=0; i < c2.length(); i++)
    {
        c2[i] = tolower( c2[i] );
    }

    if(c1 == c2) return 0;
    else
    {
        if(c1 > c2) return 1;
        else return -1;
    }
}

/* ------------------------------------------------------------------------------ */
