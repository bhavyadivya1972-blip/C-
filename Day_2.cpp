#include <iostream>
using namespace std;
int main() {
    char x;
    cout << "Enter the character: ";
    cin >> x;

    if (x >= 97 && x <= 122) {
        cout << "Lowercase";
    } else {
        cout << "Uppercase";
    } 
    return 0;
}