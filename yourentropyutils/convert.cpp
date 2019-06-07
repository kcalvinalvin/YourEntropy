#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <vector>

typedef std::vector<unsigned char> valtype;

//string to valtype
valtype sToV(std::string input) {
	valtype output(input.begin(), input.end());
	return output;
}

//valtype to string
std::string vToS(valtype input) {
	std::string output(input.begin(), input.end());
	return output;
}
//
#endif // CONVERT_H
