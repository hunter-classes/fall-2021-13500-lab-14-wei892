#include <iostream>
#include "myvector.h"

int main(){

  
  MyVector<int> v1;
  std::cout << "Vector v1 created" << std::endl;
  std::cout << "Vector values: ";
  for (int i = 0; i < v1.size(); i++){
    std::cout << "v[" <<  i << "]: " << v1[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Getting size of vector v1: ";
  std::cout << v1.size() << std::endl;

  std::cout << "Getting capacity of vector v1: ";
  std::cout << v1.capacity() << std::endl;

  std::cout << "Checking if vector v1 is empty: ";
  std::cout << v1.empty() << std::endl;

  v1.push_back(2);
  std::cout << std::endl;
  std::cout << "v1.push_back(2)" << std::endl;
  std::cout << "New v1 size: " << v1.size() << " New v1 capacity: " << v1.capacity() << std::endl;
  std::cout << "Vector values: ";
  for (int i = 0; i < v1.size(); i++){
    std::cout << "v[" <<  i << "]: " << v1[i] << " ";
  }
  std::cout << std::endl;
  
  std::cout << std::endl;
  v1.push_back(3);
  std::cout << "v1.push_back(3)" << std::endl;
  std::cout << "New v1 size: " << v1.size() << " New v1 capacity: " << v1.capacity() << std::endl;
  std::cout << "Vector values: ";
  for (int i = 0; i < v1.size(); i++){
    std::cout << "v[" <<  i << "]: " << v1[i] << " ";
  }
  std::cout << std::endl;
  
  std::cout << std::endl;
  v1.pop_back();
  std::cout << "v1.pop_back()" << std::endl;
  std::cout << "New v1 size: " << v1.size() << " New v1 capacity: " << v1.capacity() << std::endl;
  std::cout << "Vector values: ";
  for (int i = 0; i < v1.size(); i++){
    std::cout << "v[" <<  i << "]: " << v1[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}
