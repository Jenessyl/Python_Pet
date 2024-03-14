#include "sleep.h"
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <thread>

int main() {
  std::string name1 = "POU";
  sleep(name1);

  std::string name2 = "Sally";
  sleep(name2);

  std::string name3 = "adsd";
  sleep(name3);

  std::string name4 = "SDASDSADS";
  sleep(name4);

  std::string name5 = "fifth";
  sleep(name5);

  // 3,1,2,0 is the order is the order it follows with  srand(time(NULL)) (27)
  // commented out; when in use it is truly random

  return 0;
}
