#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "MONO.h"
int main() {
    std::string updCiphertext;
    std::ifstream filename;
    filename.open("BroganM.txt");
    std::stringstream line;
    int charCount = 0;
    line << filename.rdbuf();
    updCiphertext = line.str();
    filename.close();

    for(char i :updCiphertext){
        if(isalpha(i)){
            ++charCount;
        }
    }

    MONO plain(updCiphertext);
    plain.printFreq(plain.getFreqs(charCount,plain.getOccurences()));
    std::ofstream output("Deciphered.txt");
    output << plain.DECIPHER();
    output.close();
    std::cout<<"Deciphered message is now available.";
    return 0;
}
