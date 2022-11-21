#include "Singleton.h"
#include <iostream>

int main(int, char **) {
  Singleton *singleton = Singleton::getInstance();
  std::cout << singleton->getName() << std::endl;
  return 0;
}