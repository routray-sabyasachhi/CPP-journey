
// Declaration

#include<iostream>
using namespace std;
typedef struct Point {
  public :  // if we declare private then main function can't access instance member variables
  int x;
  int y;
}P;

// Now for declaration we can use keywords like (struct point, point, P)
// typedef is use for creating alias.

struct student{
  int roll;
  string name;
  string addr;
};

int main(){
  P p; // Creating object by alias;
  struct Point point; // it also create an object
  

  p.x = 10; // member variables as accessed using dot oprator
 p.y = 20;
  cout << p.x << " " << p.y<< endl;

  Point newpoint = {.x = 34}; // Designated initialization
cout << newpoint.x << " " << p.y << endl;   s

  struct student sabya = {5034, "sabya", "Bhadrak"};
// Members are initialized using curly braces and maintaining the order of declaration.

  cout << "roll :" << sabya.roll << endl;
  cout << "name :" << sabya.name << endl;
  cout << "address :" << sabya.addr << endl;
  return 0;
}

