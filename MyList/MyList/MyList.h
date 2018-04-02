#ifndef  MYLIST_H
#define MYLIST_H

#include "ListObject.h"

template <class T>
class MyList {
public:

  T& front();
  T& back();

  ListObject<T>* begin();
  ListObject<T>* end();

  void push_back(T val);
  void push_front(T val);

  int size() const;

private:

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
inline ListObject<T>* MyList<T>::begin()
{
  return frontElement;
}

template<class T>
inline ListObject<T>* MyList<T>::end()
{
  return backElement->prev;
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