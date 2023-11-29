#include<iostream>
using namespace std;

int main() {
    char c = 'a';
    char* a = &c;  // Use char* to store the address of a char variable

    // Now 'a' contains the address of 'c'

    // You can print the address to verify
    cout << "Address of c: " << static_cast<void*>(&c) << endl;
    cout << "Value of a: " << static_cast<void*>(a) << endl;

    return 0;
}
