#ifndef STRINGSHA256_H
#define STRINGSHA256_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
#include "convert.h"

// SHA256 output should always be 256 bit or 32 bytes
static const size_t OUTPUT_SIZE = 32;

typedef std::vector<unsigned char> valtype;

// Makes it easier to call CSHA256 with just a string
std::string SHA256{};
#endif //STRINGSHA256_H
