#ifndef  MYLIST_H
#define MYLIST_H

#include "ListObject.h"

template <class T>
class MyList {
public:

  ListObject<T> frontElement;
 // ListObject<T> listElement;
  ListObject<T> backElement;

  T& front();
  T& back();

  ListObject<T>* begin();
  ListObject<T>* end();

private:
  int size = 0;
};

#endif