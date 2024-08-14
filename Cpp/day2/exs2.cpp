#include <iostream>
#include <string>

using namespace std;
int main(){
    string fullname;
    cout << "Enter your fullname : ";
    getline(cin, fullname);
    int length_name = fullname.length();
    cout << "Your fullname is : " << fullname; 
    cout << endl;
    cout << "Your name have : " << length_name << " characters";
    
}