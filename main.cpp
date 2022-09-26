#include <iostream>
#include <string>
#include "Individual.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include "BitFlip.h"

Individual * execute(Individual * indPtr, Mutator * mPtr, int k) 
{
    Individual * newindPtr = new Individual(indPtr->getString());
    *newindPtr = mPtr->mutate(*indPtr, k);
    return newindPtr;
}

int main()
{
    std::string binstr1, binstr2;
    int k1, k2;
    std::cin >> binstr1 >> k1 >> binstr2 >> k2;
    Individual ind1(binstr1), ind2(binstr2);
    BitFlip bfp;
    BitFlipProb bfpProb(0.5);
    Rearrange rr;
    Individual * ind1Ptr = execute(&ind1, &bfp, k1), * ind2Ptr = execute(&ind2, &rr, k2);
    std::cout << ind1Ptr->getString() << " " << ind2Ptr->getString() << " " << ind2Ptr->getMaxOnes() << std::endl;
    return 0;
}