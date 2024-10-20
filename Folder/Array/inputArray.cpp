#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of the Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "You have entered:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}