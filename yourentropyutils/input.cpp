#include <iostream>
#include <vector>

typedef std::vector<unsigned char> valtype;

std::string inputString() {
        std::string str;
        std::cout << "Please input a string: ";
        std::cin >> str;
        return str;
}

int inputInt() {
        int i;
        std::cout << "Please input an int: ";
        std::cin >> i;
        return i;
}

int chooseEntropySize() {

        std::cout << "Choose your entropy size.       \n"
                                 "Remember, the longer the safer. \n"
                                 "Enter 128 for a 128 bit entropy.\n"
                                 "Enter 256 for a 256 bit entropy.\n"
                                 "Enter 512 for a 512 bit entropy.\n"
                                 ": ";
        return 0;
}

valtype inputCoin() {
        valtype v;
        unsigned char input;
        std::cout << "You'll enter 256 random values. \n"
                                 "Take 4 coins and heads and tails\n"
                                 "Enter 1 for head and 0 for tail: ";

        for (int i = 0; i < 256; i++) {
                std::cin >> input;
                v.push_back(input);
        }
        return v;
}
