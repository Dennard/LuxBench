#ifndef LISTOBJECT_H
#define LISTOBJECT_H

template<class T>
class ListObject {
public:

  ListObject() :next(nullptr), prev(nullptr) {}

  T value;
  ListObject<T>* next;
  ListObject<T>* prev;

};

#endif
