//Recursive Algo for Binary Search

#include <bits/stdc++.h>
using namespace std;
 

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middlle
        if (arr[mid] == x)
            return mid;
 
       
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    //-1 if not found
    return -1;
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 10, 40 };
    int x = 10;
  //size
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present"
        : cout << "Element is present at index " << result;
    return 0;
}
