#ifndef TTARGET_H
#define TTARGET_H


class TTarget
{

private:


public:
  enum TypeTarget {
    Aircraft, Missle
  };
 TTarget();
~TTarget();

void SetVelocity (double Velocity);
void SetAngleCourse ( double AngleCourse);
virtual void Move(double CurrentTime)=0;
virtual void SetTypeTarget(enum TypeTarget)=0;
private:
  double XPoint;
  double YPoint;
  double CurrentX;
  double CurrentY;
  double Velocity;
  double AngleCourse;
  double CurrentTime;

};

#endif // TTARGET_H
