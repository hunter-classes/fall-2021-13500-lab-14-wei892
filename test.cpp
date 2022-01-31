#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define CHECK DOCTEST_CHECK
#include "doctest.h"
#include <iostream>
#include "myvector.h"

TEST_CASE("Checking push_back and size"){
  MyVector<int> vec;
  vec.push_back(1);
  vec.push_back(3);
  vec.push_back(5);
  CHECK(vec.size() == 3);
  vec.push_back(2);
  vec.push_back(4);
  CHECK(vec.size() == 5);
}

TEST_CASE("Checking push_back, pop_back, and size"){
  MyVector<int> vec;
  vec.push_back(1);
  vec.push_back(3);
  vec.push_back(5);
  vec.pop_back();
  CHECK(vec.size() == 2);
  vec.push_back(2);
  vec.push_back(4);
  vec.pop_back();
  vec.pop_back();
  CHECK(vec.size() == 2);
  vec.push_back(2);
  CHECK(vec.size() == 3);
  CHECK(vec[0] == 1);
  CHECK(vec[1] == 3);
  CHECK(vec[2] == 2);
}

TEST_CASE("Checking push_back, size, clear, and empty"){
  MyVector<int> vec;
  vec.push_back(1);
  vec.push_back(3);
  vec.push_back(5);
  CHECK(vec.size() == 3);
  vec.push_back(2);
  vec.push_back(4);
  CHECK(vec.size() == 5);
  CHECK(vec[0] == 1);
  CHECK(vec.empty() == false);
  vec.clear();
  CHECK(vec.size() == 0);
  CHECK(vec.empty() == true);
}
