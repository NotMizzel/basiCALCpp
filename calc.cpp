#include <iostream>

#include <limits>

#include <type_traits>

using std::cout;
using std::cin;
using std::string;

int main() {
    int numerror = 0;
    int timesdone = 0;
    while (true) {
        cout << "Enter first number: ";
        double firstnum;
        cin >> firstnum;
        if (cin.fail()) {
            cout << "Error\n";
            cin.clear();
            cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
            continue;
        }
        string op;
        cout << "Enter operator: ";
        cin >> op;
        double secnum;
        cout << "Enter second number: ";
        cin >> secnum;
        if (cin.fail()) {
            cout << "Error\n";
            cin.clear();
            cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
            continue;
        }
        if ((op) == "*") {
            cout << firstnum * secnum << "\n";
        } else if ((op) == "/") {
            cout << firstnum / secnum << "\n";
        } else if (op == "+") {
            if (firstnum == 9 && secnum == 10) {
                timesdone += 1;
            }

            if (timesdone == 3) {
                cout << 21 << "\n";
                timesdone = 0;
            } else {
                cout << firstnum + secnum << "\n";
            }
        } else if ((op) == "-") {
            cout << firstnum - secnum << "\n";
        } else {
            cout << "Error\n";
        }
    }
}