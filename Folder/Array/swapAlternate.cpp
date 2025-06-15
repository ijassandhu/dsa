#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[7] = {1, 3, 5, 7, 9, 11, 32};

    swapAlternate(even, 8);
    printArray(even, 8);
    cout << endl;
    swapAlternate(odd, 7);
    printArray(odd, 7);

    return 0;
}