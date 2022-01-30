#include <iostream>
#include "myvector.h"


/*
  template <class T>
class MyVector{
 public:
  size();
  capacity();
  empty();
  push_back();
  pop_back();
  clear();
  T operator[] (int i){
    return data[i];
  }

};
 */

template <class T>
MyVector<T>::MyVector(){
  capacity = 1;
  size = 0;
  T arr[capacity];
}
