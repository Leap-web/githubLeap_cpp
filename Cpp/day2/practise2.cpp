#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string first_name = "Thay ";
    string last_name = "Bunleap";
    string fullname = first_name.append(" ").append(last_name);
    system("cls");
    cout << "Full Name: " << fullname << endl;
}