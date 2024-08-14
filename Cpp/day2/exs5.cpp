#include <iostream>
#define o 5

using namespace std;
int main() {
    int a[o];
    cout << "The values of " << o << " stores into the array are: ";
    for (int i = 0; i < o; i++) {
        cin >> a[i];
    }

    cout << "\n\nThe values stored into the array in reverse are: ";
    for (int i = o - 1; i >= 0; i--) {
        cout << " " << a[i] << " ";
    }
    cout << "\n\n";
    return 0;
}
