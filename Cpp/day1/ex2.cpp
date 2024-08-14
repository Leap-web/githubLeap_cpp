#include <iostream>

using namespace std;

int main(){
    string name;
    int age; 

    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;

    if ( age < 18){
        cout << "you can't watch the movies";
    }
    else{
        cout << "you can watch the movies";
    }
}