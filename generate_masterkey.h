#ifndef GENERATEMSTERKEY_H
#define GENERATEMSTERKEY_H

#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>
#include <iomanip>

#include "yourentropyutils/convert.h"
#include "crypto/sha512.h"

std::string SHA512(std::string string);

#endif // GENERATEMSTERKEY_H
