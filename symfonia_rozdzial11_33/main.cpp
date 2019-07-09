#include <iostream>
#include <string>
#include "compareCI.h"

using namespace std;

string cityA("Lisbon");
string cityB("paris");

int main()
{
    cout << compareCI(cityA, cityB) << endl;
    return 0;
}
