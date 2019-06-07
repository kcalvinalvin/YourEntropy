#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <vector>

typedef std::vector<unsigned char> valtype;

//string to valtype
valtype sToV(std::string input);

//valtype to string
std::string vToS(valtype input);
//
#endif // CONVERT_H
