#include <iostream>
#include <string>
#include "analyzePolygonString.h"

using namespace std;

string fileNameHasAll("matrix_zet_vs_aoq_polygon_cr54.poly");
string fileNameHasExt("matrix_zet_vs_aoq_cr54.poly");
string fileNameHasName("matrix_zet_vs_aoq_polygon_cr54.not");
string fileNameHasNone("matrix_zet_vs_aoq_cr54.not");

int main()
{
    cout << "fileNameHasAll: " << analyzePolygonString( fileNameHasAll ) << endl;
    cout << "fileNameHasExt: " << analyzePolygonString( fileNameHasExt ) << endl;
    cout << "fileNameHasName: " << analyzePolygonString( fileNameHasName ) << endl;
    cout << "fileNameHasNone: " << analyzePolygonString( fileNameHasNone ) << endl;
    return 0;
}
