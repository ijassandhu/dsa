#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    // int start = 0;
    int end = size - 1;
    while (end >= 0)
    {
        cout << arr[end] << " ";
        end--;
    }
    return 0;
}