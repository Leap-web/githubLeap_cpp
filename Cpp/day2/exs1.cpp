#include <iostream>

using namespace std;

int main(){
    int arr[5];
    int sum = 0; 
    int n = 5;

    for(int i = 0; i < n; i++){
        cout<<"Enter integer " << i+1 << " : ";
        cin >> arr[i];
    }
    for(int i =0; i < 5; i++){
        sum += arr[i];
    }
    cout<<"The sum of the array is : "<< sum;

    return 0;
}
