#include <iostream>
#include <string>

using namespace std;

/* short program for testing how string class increases it's size dynamically */

string poem;
string::size_type previous_capacity = poem.capacity();

int main()
{
    for(int i=1; i < 500; i++)
    {
        // adding one character at a time
        poem += 'A';

        // read the current capacity of the string
        string::size_type current_capacity = poem.capacity();

        // if the current capacity has changed, show it on the screen how much and when
        if(current_capacity != previous_capacity)
        {
            cout << "Letter amount: " << i << " capacity was increased into: " << current_capacity
                 << " (increase by +" << (current_capacity - previous_capacity) << ")" << endl;
            // set to the same capacity to prevent showing the same thing over and over again
            previous_capacity = current_capacity;
        }
    }
    return 0;
}
