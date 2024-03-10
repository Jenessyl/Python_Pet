/**
 * Project III: Start testing here.
 */
#include "library.h"
#include "library.cpp"
#include <assert.h>
#include <string>

int main() {
  // Sample test
  std::string actual = helloWorld();
  assert(actual == "Hello World!");
}
