CC = g++
CFLAGS = -I. -std=c++14

YourEntropy:
	$(CC)	generate_mnemonic.cpp\
	 	generate_masterkey.cpp\
		crypto/sha512.cpp\
		crypto/sha256.cpp\
		yourentropyutils/input.cpp\
		yourentropyutils/convert.cpp\
		yourentropyutils/stringsha256.cpp\
		$(CFLAGS) -o YourEntropy.o
