#include <string>

#ifndef Indivudual_h
#define Indivudual_h

class Individual
{
private:
    std::string binaryString;
public:
    Individual(int n);
    Individual(std::string str);
    void flipBit(int pos);
    std::string getString();
    int getBit(int pos);
    int getMaxOnes();
    int getLength();
};

#endif