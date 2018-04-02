#ifndef LISTOBJECT_H
#define LISTOBJECT_H

template<class T>
struct ListObject {
  T value;
  T* next;
  T* prev;
};




#endif