#include <iostream>
#include <vector>
#include <sstream>
#include <bitset>
#include <iomanip>

#include "yourentropyutils/convert.h"
#include "crypto/sha512.h"

std::string SHA512(std::string string) {
	valtype input = sToV(string);
	unsigned char hash[64];
	CSHA512().Write(input.data(), input.size()).Finalize(hash);

	std::stringstream ss;
	for(int i = 0; i < 64; i++) {
		ss << std::hex << std::setfill('0') << (int)hash[i];
	}
	return ss.str();
}
