#include<iostream>

int  num() {
  return 10;
}

int main() {

  int x {3+2};
  int y {num()};
  std :: cout << x << "\t" << y ;
  return 0;
}