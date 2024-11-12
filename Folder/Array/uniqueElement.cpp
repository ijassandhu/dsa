#include <iostream>
#include <vector>
using namespace std;

int find(const vector<int> &arr)
{
    int ans = 0;
    for (size_t i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
        cout << "Current XOR result: " << ans << " after processing element " << arr[i] << endl; // Debug output
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    if (!(cin >> n)) // Check if input is valid
    {
        cout << "Invalid input. Please enter an integer for the array size." << endl;
        return 1; // Exit if input is invalid
    }

    if (n <= 0) // Check if the entered size is positive
    {
        cout << "Array size must be positive.";
        return 1;
    }

    // Vector initialization
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (size_t i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = find(arr);
    cout << "The unique element is: " << uniqueElement << endl;
    return 0;
}
