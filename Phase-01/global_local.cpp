#include <iostream>

extern int x;  // declare but not define

int main() {
  int y = 10; // y is local variable it is only acessible in main()
  std :: cout << y;
  std :: cout << x;
}

int x = 5;  // here x defined and global variable