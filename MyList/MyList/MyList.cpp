#include "MyList.h"

template<class T>
T & MyList<T>::front()
{
  return frontElement.value;
}

template<class T>
T & MyList<T>::back()
{
  return backElement.value;
}

template<class T>
ListObject<T>* MyList<T>::begin()
{
  return &frontElement;
}

template<class T>
ListObject<T>* MyList<T>::end()
{
  return &backElement;
}
