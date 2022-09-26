#include "Individual.h"
#include "BitFlip.h"

Individual BitFlip::mutate(Individual ind, int k)
{
    Individual newInd(ind.getString());
    k = (abs(k) - 1) % ind.getLength();
    newInd.flipBit(k);
    return newInd;
}