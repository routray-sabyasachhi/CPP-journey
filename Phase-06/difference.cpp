
// Struct can Act like classes

#include<iostream>
using namespace std;

struct point{
  int x, y;

  point(int a, int b){     // Constructor
    x = a;
    y = b;
  }

  void print() {
    cout << x << " " << y << endl;
  }
};

struct Derived : point {}; //public inheritance by default

// check Default Inheritance
class Base {
  public:
  int x;
};

class Derived : Base {}; // private inheritance by default


int main(){
  point p(10,20);
  p.print();

  Derived d;
 //  d.x = 10;    // comiler error x is private in Derived class
  return 0;
}