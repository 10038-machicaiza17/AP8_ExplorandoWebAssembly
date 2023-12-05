// Filename: add.cpp
#include <iostream>

extern "C" {
  int add(int a, int b) {
    return a + b;
  }
}

int main() {
  return 0;
}