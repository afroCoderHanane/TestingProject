#include"Point.h"
class dirt : public point {
private:
  bool gone;
public:
  dirt() { gone = false; }
  void disappear();
};
