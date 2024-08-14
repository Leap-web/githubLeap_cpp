#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
int main(){
    string first_name, last_name, fullname;
    system("cls");
    cout << "Enter your first name : ";
    cin >> first_name;
    cout << endl;
    cout << "Enter your last name : ";
    cin >> last_name;
    cout << endl;
    fullname = first_name.append(" ").append(last_name);
    cout << "Your full name is : " << fullname << endl;
    return 0;
}