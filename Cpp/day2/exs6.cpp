#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array : ";

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " element of array : ";
        cin >> arr[i];
    }

    int Max = arr[0];
    int Min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
        if (arr[i] < Min)
        {

            Min = arr[i];
        }
    }

    cout << "The smallest array element is : " << Min << endl;
    cout << "The highest array element is : " << Max << endl;
}
