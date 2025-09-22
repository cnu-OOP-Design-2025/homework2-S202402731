#include "homework2-1.h"
#include <iostream>
using namespace std;

/* TODO IntClac 네임스페이스 및 함수 정의하기 */
namespace IntCalc {
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    int divide(int a, int b) {
        if (b == 0) {
            cout << "Error: divide by zero" << endl;
            return 0;
        }
        return a / b;  
    }

    void calc() {
        int a, b;
        int choice;

        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "Choose operation(Enter number): 1:Add 2:Subtract 3:Multiply 4:Divide: ";
        cin >> choice;

        switch (choice) {
                case 1: cout << "Result: " << add(a, b) << endl; break;
                case 2: cout << "Result: " << subtract(a, b) << endl; break;
                case 3: cout << "Result: " << multiply(a, b) << endl; break;
                case 4: cout << "Result: " << divide(a, b) << endl; break;
                default: cout << "Invalid choice!" << endl; break;
            }
    }
}
/* TODO FloatClac 네임스페이스 및 함수 정의하기 */
namespace FloatCalc {
    float add(float a, float b) { return a + b; }
    float subtract(float a, float b) { return a - b; }
    float multiply(float a, float b) { return a * b; }
    float divide(float a, float b) {
        if (b == 0.0f) {
            cout << "Error: divide by zero" << endl;
            return 0.0f;
        }
        return a / b;  
    }

    void calc() {
        float a, b;
        int choice;

        cout << "Enter two floats: ";
        cin >> a >> b;
        cout << "Choose operation(Enter number): 1:Add 2:Subtract 3:Multiply 4:Divide: ";
        cin >> choice;
        
        switch (choice) {
                case 1: cout << "Result: " << add(a, b) << endl; break;
                case 2: cout << "Result: " << subtract(a, b) << endl; break;
                case 3: cout << "Result: " << multiply(a, b) << endl; break;
                case 4: cout << "Result: " << divide(a, b) << endl; break;
                default: cout << "Invalid choice!" << endl; break;
            }
    }
}


