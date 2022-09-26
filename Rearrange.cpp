#include "Individual.h"
#include "Rearrange.h"

#include <iostream>

Individual Rearrange::mutate(Individual ind, int k)
{
    k = (abs(k) - 1) % ind.getLength();
    std::string binstr = ind.getString();
    std::string newbinstr = binstr.substr(k, binstr.length()) + binstr.substr(0, k);
    Individual newind(newbinstr);
    return newind;
}