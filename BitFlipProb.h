#include "Individual.h"
#include "Mutator.h"

#ifndef BitFlipProb_h
#define BitFlipProb_h

class BitFlipProb : public Mutator
{
private:
    double prob;
public:
    BitFlipProb(double p);
    Individual mutate(Individual ind, int k);
};

#endif