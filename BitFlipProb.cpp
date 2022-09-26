#include "BitFlipProb.h"
#include "Individual.h"
#include <time.h>
#include <random>

BitFlipProb::BitFlipProb(double p)
{
    prob = p;
}

Individual BitFlipProb::mutate(Individual ind, int k)
{
    Individual newInd(ind.getString());
    srand(time(NULL));
    for (int i = 0; i < ind.getLength(); i++) if ((double)rand() / RAND_MAX < prob) newInd.flipBit(i);    
    return newInd;
}