#include <iostream>

#include "assignment/code.hpp"

using namespace std;
using namespace assignment;

int main() {

  int arr_example[] = {3, 2, 5}; int length = 3;
  int *result = clone_arr(arr_example, length);
  cout << *result << '\n';
  return 0;
}
