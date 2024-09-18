#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age;  // Throwing an exception for underage
        } else {
            cout << "Age: " << age << "\nAPPROVED" << endl;
        }
    }
    catch (int a) {
        cout << "\nERROR: Underage (" << a << ")" << endl;  // Handling the exception
    }

    return 0;
}