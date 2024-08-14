#include <iostream>
#include <string>

using namespace std;
int main(){
    string fullname;
    int size = 3;
    int length_number = fullname.length();

   

    for( int i = 0; i < size; i++){
        cout << "Enter the  " << i+1 << " full name: ";
        getline( cin, fullname);
    }

}