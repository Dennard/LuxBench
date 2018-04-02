#include <iostream>
#include "MyList.h"

int main() {
  MyList<int> list;

  list.push_back(2);
  list.push_back(1);
  list.push_front(3);
  list.push_front(4);

  for (auto i = list.begin(); i != list.end(); i++) {
    std::cout << i->value << std::endl;
  }

  system("pause");
  return 0;
}