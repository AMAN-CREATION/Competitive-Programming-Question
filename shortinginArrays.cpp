
#include <iostream>
#include <algorithm>
 
int main()
{
    int arr[] = { 3, 5, 2, 4, 7 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    std::sort(arr, arr + n);
 
    for (int const &i: arr) {
        std::cout << i << ' ';
    }
 
    return 0;
}