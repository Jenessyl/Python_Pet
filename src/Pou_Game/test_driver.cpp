/**
 * Project III: Start testing here.
 */
#include "library.cpp"
#include "library.h"
#include <assert.h>
#include <string>

int main() {
  // Sample test
  std::string actual = helloWorld();
  assert(actual == "Hello World!");
}
