#include "recfuncs.h"
#include  <stdlib.h>
int calc_array_size(int n){
  if (n == 0) {
    return 1;
  }




  return 2*calc_array_size(n -1); // n-1 bcs you will get a ifinity-loop, multiply with 2 bcs the unittests
}
int convert_to_binary(int n){
  if(n == 0) {
    return 0;
  }

  return (n%2)+10*convert_to_binary(n/2);
}
int* create_array(int size){
  int* arr = (int*)malloc(sizeof(int));
  fill_arr(arr, size, 0);
  return arr; //array can be changed in diffrend methods ---out param


}

void fill_arr(int* arr, int size, int i){
  if(i < size) {
    int* new_address = arr + i;
    new_address = (int*)malloc(sizeof(int));
    arr[i] = -1;
    fill_arr(arr, size, i+1);

    // Useless code to remove warning
    int* start_p = new_address;
    new_address = start_p;
}
}
int calc_factorial(int n){
  return 0;
}
void calc_sums(int* n, int count, int* out_arr, int* out_arr_bin){

}
struct CalculationResults perform_calculations(int* arr, int n){

    struct CalculationResults newCal;

  return newCal;
}
