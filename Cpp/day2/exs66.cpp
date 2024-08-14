#include <iostream>

using namespace std;
int main()
{
    int arr[5];
    int n = 5;

    cout << "Please enter a number";
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number of each elements: ";
        cin >> arr[i];
    }
    cout << endl;

    int length = sizeof(arr) / sizeof(arr[0]);
    int temp1 = arr[0];
    int temp2 = arr[0];

    for (int i = 0; i < length; i++)
    {
        if (temp1 < arr[i])
        {
            temp1 = arr[i];
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (temp2 > arr[i])
        {
            temp2 = arr[i];
        }
    }

    cout << "The largest element of the array is: " << temp1 << endl;
    cout << "The smallest element of the array is: " << temp2 << endl;

    return 0;
}
