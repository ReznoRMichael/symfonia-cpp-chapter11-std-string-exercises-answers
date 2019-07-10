#ifndef ANALYZEPOLYGONSTRING_H
#define ANALYZEPOLYGONSTRING_H

#include <string>

using namespace std;

/* ---------------------------------
Analyzes string for .poly extension and _polygon_ name
if the string contains both, then returns the substring between them
else returns empty string
-----------------------------------*/

string analyzePolygonString( string );

#endif // ANALYZEPOLYGONSTRING_H
