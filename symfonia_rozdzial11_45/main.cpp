#include <iostream>
#include <string>
#include "deleteFileExtension.h"

using namespace std;

string fileNameWithoutExtension("this_is_a_file_without_extensions");
string fileNameWithOneExtension("this_is_a_file_with_one_extension.reznor");
string fileNameWithMoreExtensions("this_is_a_file_with_many_extensions.reznor.rzr.rez.rrr");

int main()
{
    cout << deleteFileExtension( fileNameWithoutExtension ) << endl;
    cout << deleteFileExtension( fileNameWithOneExtension ) << endl;
    cout << deleteFileExtension( fileNameWithMoreExtensions ) << endl;

    return 0;
}
