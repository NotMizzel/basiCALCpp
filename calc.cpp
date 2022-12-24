#include <iostream>

#include <type_traits>

using std::cout;
using std::cin;
using std::string;
int main() {
int numerror = 0;
int timesdone = 0;
while (true) {
    double firstnum;
    cout << "Enter first number: ";
    cin >> firstnum;

    if (!std::is_floating_point < decltype(firstnum) > ()) {
        cout << "Error";
        numerror = 1;
    }

    if (numerror == 0) {
        string op;
        cout << "Enter operator: ";
        cin >> op;

        if (cin.fail()) {
            cout << "Error\n";
            cin.clear();
            cin.ignore(std::numeric_limits < std::streamsize > ::max(), '\n');
            continue;
        }

        double secnum;
        cout << "Enter second number: ";
        cin >> secnum;

        if (!std::is_floating_point < decltype(secnum) > ()) {
            numerror = 1;
            cout << "Error";
        }
        if (numerror == 0) {
            if ((op) == "*") {
                cout << firstnum * secnum << "\n";
            } else if ((op) == "/") {
                cout << firstnum / secnum << "\n";
            } else if (op == "+") {
                if (firstnum == 9 && secnum == 10) {
                    timesdone++;
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
}
}
