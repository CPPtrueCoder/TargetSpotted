#include "ttarget.h"
#ifndef AIRCRAFT_H
#define AIRCRAFT_H


class Aircraft:public TTarget
{
public:
  Aircraft();
  ~Aircraft();
 void Move (double CurrentTime) override;

};

#endif // AIRCRAFT_H
