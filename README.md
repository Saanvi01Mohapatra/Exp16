# Exp16
## Aim
To understand and implement Exception Handling in C++ programming.

## Apparatus
Visual Studio Code (VS Code)
## Theory
An exception is an unexpected issue that occurs during a program's execution, which can cause it to crash if not handled properly. C++ provides a structured way to deal with runtime exceptions using three main keywords: try, catch, and throw.
## What is Exception Handling?
Exception handling is a programming construct designed to handle the occurrence of exceptions—unexpected problems that arise during the execution of a program. When an exception occurs, it can disrupt the normal flow of the program, leading to crashes or incorrect results. Exception handling allows developers to create robust applications that can respond to these unexpected situations gracefully.
### try:
Contains the code that may throw an exception.
### catch: 
Handles exceptions thrown by the try block and contains the code to manage the error.
### throw: 
Used to signal that an exception has occurred, transferring control to the corresponding catch block.
## Why Use Exception Handling?
Improved Robustness: By catching exceptions, programs can recover from errors and continue running instead of terminating abruptly.
Code Clarity: Separating error-handling code from regular code enhances readability and maintainability.
Resource Management: Exception handling can help manage resources effectively, ensuring that resources are freed or closed properly even when errors occur.

## Code 1: Handling Division by Zero
```
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
```
## output:
```
Enter the numbers 1 and 2: 3
4
Answer = 0.75
```
## Code 2: Validating Age
```
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
```
## output:
```
Enter age: 23
Age: 23
APPROVED
```
## Conclusion
Exception handling in C++ enhances program robustness by allowing developers to manage unexpected errors effectively. Using try, catch, and throw, we can create applications that handle runtime issues gracefully, improving user experience and stability.
