#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int arr[], int size)
{
    arr[0] = arr[0] + 10;
    arr[1] = arr[1] - 1;
    printArray(arr, size);
}
int main()
{
    int arr[] = {1, 2};
    int size = 2;
    inc(arr, size);
    printArray(arr, size);
    return 0;
}