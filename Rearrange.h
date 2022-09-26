#include "Individual.h"
#include "Mutator.h"

#ifndef Rearrange_h
#define Rearrange_h

class Rearrange : public Mutator
{
public:
    Individual mutate(Individual ind, int k);
};

#endif