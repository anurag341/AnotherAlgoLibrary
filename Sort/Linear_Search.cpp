//Algo : Linear Search
//Language : CPP

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  
  //return -1 if not found
  return -1;
}

//main function
int main() {
  //sample array
  int array[] = {1, 2, 3, 4, 6};
  int x = 1;
  //size
  int n = sizeof(array) / sizeof(array[0]);

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
