#include "Individual.h"
#include <string>

Individual::Individual(int n) { for (int i = 0; i < n; i++) binaryString += "0"; }

Individual::Individual(std::string str) { binaryString = str; }

void Individual::flipBit(int pos) { binaryString[pos] = (char)((binaryString[pos] == '0') + 48); }

std::string Individual::getString() { return binaryString; }

int Individual::getBit(int pos)
{
    if (pos < 0 || pos >= int(binaryString.length())) return -1;
    return binaryString[pos];
}

int Individual::getMaxOnes()
{
    int max = 0, count = 0;
    for (int i = 0; i < int(binaryString.length()); i++)
    {
        if (binaryString[i] == '1')
        {
            count++;
            if (count > max) max = count;
        }
        else count = 0;
    }
    return max;
}

int Individual::getLength() { return binaryString.length(); }