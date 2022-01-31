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
  vCapacity = 1;
  vSize = 0;
  arr = new T[vCapacity];
}

template <class T>
int MyVector<T>::size(){
  return vSize;
}

template <class T>
int MyVector<T>::capacity(){
  return vCapacity;
}

template <class T>
bool MyVector<T>::empty(){
  if (vSize = 0){
    return true;
  }
  else {
    return false;
  }
}

template <class T>
void MyVector<T>::push_back(T item){
  if (vSize >= vCapacity){
    vCapacity++;
    T* tempArr = new T(vCapacity);
    for (int i = 0; i < vSize; i++){
      tempArr[i] = arr[i];
    }
    
    delete[] arr;
    arr = nullptr;

    vSize++;
    tempArr[vSize-1] = item;
    arr = tempArr;
  
    //delete[] tempArr;
    //tempArr = nullptr;
  }
  else{
    vSize++;
    arr[vSize-1] = item;
  }
}

template <class T>
void MyVector<T>::pop_back(){
  T* tempArr = new T(vCapacity);
  vSize--;
  for (int i = 0; i < vSize; i++){
    tempArr[i] = arr[i];
  }
  delete[] arr;
  arr = nullptr;

  arr = tempArr;
  //delete[] tempArr;
  //tempArr = nullptr;
}

template <class T>
void MyVector<T>::clear(){
  vSize = 0;
  delete[] arr;
  arr = nullptr;
}
