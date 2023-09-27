#include "MONO.h"
#include <iostream>
#include <string>
MONO::MONO(std::string& ciphertext) {
    this->ciphertext = ciphertext;
}

std::vector<int> MONO::getOccurences() {
    std::vector<int> occurs;
    int count = 0;
    int length = ciphertext.size();
    int j = 0;
    while(j < alphabet.size()){
        count =0;
        for(int i =0; i< length;i++){
            if(alphabet[j] == ciphertext[i]){
                ++count;
            }
        }
        occurs.push_back(count);
        ++j;
    } return occurs;
}

std::vector<double> MONO::getFreqs(int total, const std::vector<int>& occurances) {
    std::vector<double> Freqs;

    Freqs.reserve(occurances.size());
    for(int i : occurances){
        Freqs.push_back((static_cast<double>(i)/total));
    }

    return Freqs;
}

void MONO::printFreq(std::vector<double> freq) {
    for(int i = 0; i<freq.size();i++){
        std::cout<<alphabet[i] <<": "<<freq[i] *100<<"%\n";
    }
}

std::string MONO::DECIPHER() {
    std::string plaintext;
    for(char i : ciphertext){
        if(isalpha(i)){
        plaintext.push_back(key.find(i)->second);}
        else{plaintext.push_back(i);}
    }
    return plaintext;
}