#include <iostream>
using namespace std;

void lengthConverter() {
    double value;
    int choice;

    cout << "Length Converter:" << endl;
    cout << "1. Meters to Kilometers" << endl;
    cout << "2. Kilometers to Meters" << endl;
    cout << "3. Miles to Kilometers" << endl;
    cout << "4. Kilometers to Miles" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch(choice) {
        case 1:
            cout << value << " meters is " << value / 1000 << " kilometers." << endl;
            break;
        case 2:
            cout << value << " kilometers is " << value * 1000 << " meters." << endl;
            break;
        case 3:
            cout << value << " miles is " << value * 1.60934 << " kilometers." << endl;
            break;
        case 4:
            cout << value << " kilometers is " << value / 1.60934 << " miles." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

void temperatureConverter() {
    double value;
    int choice;

    cout << "Temperature Converter:" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch(choice) {
        case 1:
            cout << value << " degrees Celsius is " << (value * 9/5) + 32 << " degrees Fahrenheit." << endl;
            break;
        case 2:
            cout << value << " degrees Fahrenheit is " << (value - 32) * 5/9 << " degrees Celsius." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

void weightConverter() {
    double value;
    int choice;

    cout << "Weight Converter:" << endl;
    cout << "1. Kilograms to Pounds" << endl;
    cout << "2. Pounds to Kilograms" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value to convert: ";
    cin >> value;

    switch(choice) {
        case 1:
            cout << value << " kilograms is " << value * 2.20462 << " pounds." << endl;
            break;
        case 2:
            cout << value << " pounds is " << value / 2.20462 << " kilograms." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}

int main() {
    int option;

    cout << "Unit Converter Menu:" << endl;
    cout << "1. Length Converter" << endl;
    cout << "2. Temperature Converter" << endl;
    cout << "3. Weight Converter" << endl;
    cout << "Enter your option: ";
    cin >> option;

    switch(option) {
        case 1:
            lengthConverter();
            break;
        case 2:
            temperatureConverter();
            break;
        case 3:
            weightConverter();
            break;
        default:
            cout << "Invalid option!" << endl;
            break;
    }

    return 0;
}
