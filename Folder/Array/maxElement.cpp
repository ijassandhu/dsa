#include <iostream>
using namespace std;

int main()
{
    int arr[] = {34, 45, 67, 5, 43, 2, 4, 6, 56, 9};
    int maxi = INT_MIN;
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    cout << "Maximum number in the given array is " << maxi;
}