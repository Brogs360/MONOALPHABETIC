#pragma once
#include <string>
#include <map>
class MONO{
private:
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::map<char,char> key ={
            {'M','A'},{'W','B'},{'Z','C'},{'F','D'},{'V','E'},{'R','F'},{'E','G'},{'H','H'},{'B','I'},{'L','J'},{'X','K'},{'I','L'},{'C','M'},{'D','N'},{'A','O'},{'G','P'},{'O','Z'},{'N','R'},{'S','S'},{'Q','T'},{'U','U'},
            {'P','V'},{'K','W'},{'J','X'},{'Y','Y'},{'T','Q'},

    };
public:
    int count;
    std::string ciphertext;
    MONO(std::string& ciphertext);
    std::vector<int> getOccurences();
    std::vector<double> getFreqs(int total, const std::vector<int>& occurances);
    void printFreq(std::vector<double> freq);
    std::string DECIPHER();

};