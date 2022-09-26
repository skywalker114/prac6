#include "Individual.h"
#include "Mutator.h"

#ifndef BitFlip_h
#define BitFlip_h

class BitFlip : public Mutator
{
public:
    Individual mutate(Individual ind, int k);
};

#endif