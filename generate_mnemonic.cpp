#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>

#include "crypto/sha256.h"
#include "generate_masterkey.h"
#include "yourentropyutils/input.h"
#include "yourentropyutils/convert.h"
#include "yourentropyutils/stringsha256.h"

typedef std::vector<unsigned char> valtype;

valtype v = inputCoin();
unsigned char hash[OUTPUT_SIZE];

int main() {
	std::cout << SHA512(vToS(v)) << std::endl;	
	return 0;
}
