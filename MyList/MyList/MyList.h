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

private:

  ListObject<T> frontElement;
  ListObject<T> backElement;

  int size = 0;
};

template<class T>
inline T & MyList<T>::front()
{
  return frontElement.value;
}

template<class T>
inline T & MyList<T>::back()
{
  return backElement.value;
}

template<class T>
inline ListObject<T>* MyList<T>::begin()
{
  return &frontElement;
}

template<class T>
inline ListObject<T>* MyList<T>::end()
{
  return &backElement;
}

template<class T>
inline void MyList<T>::push_back(T val)
{
  
}

template<class T>
inline void MyList<T>::push_front(T val)
{

}



#endif