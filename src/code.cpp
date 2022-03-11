#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy
using namespace std;

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int diff = (left - right);

    return diff * diff;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (bit_pos < 0 || mask < 0){

        return false;

        }else {

          return mask & (1 << bit_pos);
        }
  }

  // Task 3
  int max3(int left, int middle, int right) {

    if (left > middle){
      if (left > right){
        return left;
      }else{
        return right;
      }
    } else{
      if (middle > right){
        return middle;
      }else{
        return right;
      }
    }
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left != nullptr && right != nullptr){
      int element = *left;
      *left = *right;
      *right = element;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (length <= 0 || arr == nullptr){
      return 0;
    }else{
      int summa = 0;

      for (int i = 0; i < length; i++){
        summa += arr[i];
      }
      return summa;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (length <= 0 || arr == nullptr){
      return nullptr;
    }else{
      int max_elem = arr[0];
      int *result = &arr[0];

      for (int i = 1; i < length; i++){
        if (arr[i] > max_elem){
          max_elem = arr[i];
          result = arr + i;
        }
      }
      return result;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0){
        return nullptr;
      }else{

        int arr[length];
        for (int i = 0; i < length; i++){
          arr[i] = init_value;
        }
        return arr;
      }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length <= 0 || arr_in == nullptr){
      return nullptr;
    }else{
      int element = arr_in[0];
      int* arr_copy = new int[length];
      arr_copy[0] = element;
      for (int i = 1; i < length; i++){
        element = arr_in[i];
        arr_copy[i] = element;
      }

      return arr_copy;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr){
      cout << 'Invalid argument: arr\n' << endl;
    }else if(length <= 0){
      cout << "Invalid argument: length\n" << endl;
    }else if (k <= 0){
      cout << "Invalid argument: k\n" << endl;
    }else{
      for (int i = 0; i < length; i += k){
        cout << arr[i] << endl;
      }
    }
  }

}  // namespace assignment
