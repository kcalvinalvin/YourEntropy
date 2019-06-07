#ifndef STRINGSHA256_H
#define STRINGSHA256_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
#include "convert.h"

#include "crypto/sha256.h"

// SHA256 output should always be 256 bit or 32 bytes
static const size_t OUTPUT_SIZE = 32;

typedef std::vector<unsigned char> valtype;

// Makes it easier to call CSHA256 with just a string
std::string SHA256(std::string string) {
	valtype input = sToV(string);
	unsigned char hash[OUTPUT_SIZE];
	CSHA256().Write(input.data(), input.size()).Finalize(hash);
	
	// writes the finalized hash to a string
	std::stringstream ss;
	for(int i = 0; i < OUTPUT_SIZE; i++) {
		ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
	}
	return ss.str();
}
#endif //STRINGSHA256_H
