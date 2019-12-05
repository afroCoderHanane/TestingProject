#include "Point.h"
#include<iostream>
using namespace std;
class creature : public point {
public:
  void move();
  void move( direction d );
  virtual void speak() = 0;
};
