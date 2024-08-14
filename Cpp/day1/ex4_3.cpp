#include <iostream>

using namespace std;

int main(){
    int x, y;
    int options;
    int addition;
    int subtraction;
    int multiplication;
    float division;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;

    cout << "Choose an operation: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Choose operation (1-4): ";
    cin >> options;
    switch ( options ){
        case 1 : 
        addition = x + y;
        cout <<" The addition is " << addition << endl;
        break;
        case 2 : 
        subtraction = x - y;
        cout <<" The subtraction is " << subtraction <<endl;
        break;
        case 3 :
        multiplication = x * y;
        cout <<" The multiplication is " << multiplication <<endl;
        break;
        case 4 :
        division = (float)x / (float)y;
        cout << "The division is " << division <<endl;
        break;
        default : 
        cout << "Invalid operation" << endl;
    }
   

}