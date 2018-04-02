#include <iostream>
#include "MyList.h"

int main() {
  MyList<int> list;

  list.push_back(2);
  list.push_back(1);
  list.push_front(3);
  list.push_front(4);

  std::cout << list.back() << std::endl;
  std::cout << list.end()->next->value << std::endl;
  std::cout << list.begin()->prev->value << std::endl;
  std::cout << list.begin()->value << std::endl;

  system("pause");
  return 0;
}