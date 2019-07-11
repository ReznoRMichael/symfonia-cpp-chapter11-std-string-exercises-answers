#include <iostream>
#include <string>
#include "moduleNumber.h"

using namespace std;

string moduleNamePrefix("Cluster_");

int main()
{
    cout << moduleNumber( moduleNamePrefix + "A" ) << endl;

    return 0;
}
