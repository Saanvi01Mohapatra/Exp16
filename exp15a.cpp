#include <iostream>
using namespace std;

int main() {
    float n1, n2, ans;
    cout << "Enter the numbers 1 and 2: ";
    cin >> n1 >> n2;

    try {
        if (n2 == 0) {
            throw n2;  // Throwing an exception for division by zero
        } else {
            ans = n1 / n2;
            cout << "Answer = " << ans << endl;
        }
    }
    catch (float num) {
        cout << "ERROR: Division by " << num << endl;  // Handling the exception
    }

    return 0;
}