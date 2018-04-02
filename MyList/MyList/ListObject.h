#ifndef LISTOBJECT_H
#define LISTOBJECT_H

template<class T>
class ListObject {
public:

  ListObject() :next(nullptr), prev(nullptr) {}

  T value;
  ListObject<T>* next;
  ListObject<T>* prev;

  void operator++();
};

#endif

template<class T>
inline void ListObject<T>::operator++()
{
  this = prev;
}
