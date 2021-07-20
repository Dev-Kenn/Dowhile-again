#include <iostream>
using namespace std;

int main() {
    char choice;
    int num1, num2;

    do{
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        cout << "Their sum is " << num1 + num2;

        cout << "\nDo you wish to continue? (Y/N): ";
        cin >> choice;
        
    } while(choice == 'Y' || choice == 'y');

    return 0;
}