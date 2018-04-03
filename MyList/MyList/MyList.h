#ifndef  MYLIST_H
#define MYLIST_H

#include "ListObject.h"

template <class T>
class MyListIterator {
public:
  ListObject<T>* current;

  void operator++() {
    current = current->prev;
  }

  void operator--() {
    current = current->next;
  }

  ListObject<T>* operator->() {
    return current;
  }

  bool operator==(const MyListIterator<T>& obj) {
    return this->current == obj.current;
  }

  bool operator!=(const MyListIterator<T>& obj) {
    return current != obj.current;
  }

};

template <class T>
class MyList {
public:

  T& front();
  T& back();

  MyListIterator<T> begin();
  MyListIterator<T> end();

  void push_back(T val);
  void push_front(T val);

  int size() const;

private:

  MyListIterator<T> iterator;

  ListObject<T>* frontElement;
  ListObject<T>* backElement;

  int list_size = 0;

};

template<class T>
inline T & MyList<T>::front()
{
  return frontElement->value;
}

template<class T>
inline T & MyList<T>::back()
{
  return backElement->value;
}

template<class T>
inline MyListIterator<T> MyList<T>::begin()
{
  iterator.current = frontElement;
  return iterator;
}

template<class T>
inline MyListIterator<T> MyList<T>::end()
{
  iterator.current = backElement->prev;
  return iterator;
}

template<class T>
inline void MyList<T>::push_back(T val)
{
  ListObject<T>* newBack = new ListObject<T>();
  newBack->value = val;

  if (list_size == 0) {
    backElement = newBack;
    frontElement = backElement;
  }

  if (list_size == 1) {
    newBack->next = backElement;
    backElement = newBack;
    backElement->next = frontElement;
  }

  else {
    ListObject<T>* temp = new ListObject<T>();
    temp = backElement;
    backElement = newBack;
    backElement->next = temp;
    temp->prev = backElement;
  }
  list_size++;
}

template<class T>
inline void MyList<T>::push_front(T val)
{
  ListObject<T>* newFront = new ListObject<T>();
  newFront->value = val;

  if (list_size == 0) {
    frontElement = newFront;
    backElement = frontElement;
  }

  if (list_size == 1) {
    newFront->prev = backElement;
    frontElement = newFront;
    backElement->next = frontElement;
  }

  else {
    ListObject<T>* temp = new ListObject<T>();
    temp = frontElement;
    frontElement = newFront;
    frontElement->prev = temp;
    temp->next = frontElement;
  }
  list_size++;
}

template<class T>
inline int MyList<T>::size() const
{
  return list_size;
}

#endif