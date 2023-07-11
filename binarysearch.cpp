// C++ program to implement  Binary Search
#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
            r = m - 1;
    }
 