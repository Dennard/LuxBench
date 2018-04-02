#ifndef LISTOBJECT_H
#define LISTOBJECT_H

template<class T>
class ListObject {
public:
  ListObject() :next(nullptr), prev(nullptr) {}
  T value = 0;
  ListObject* next;
  ListObject* prev;
};

#endif
