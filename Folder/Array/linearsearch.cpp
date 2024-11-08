#include <iostream>
using namespace std;
bool element(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)

            return true;
    }
    return false;
}
int main()
{
    int arr[] = {2, 34, 56, 6, 7, 8};
    int size = 6;
    int key;
    cout << "Enter the key value to search in the array:" << endl;
    cin >> key;
    if (element(arr, size, key))
    {
        cout << "Element found in the array" << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    };
}