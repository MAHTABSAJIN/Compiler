#include <iostream>
using namespace std;

int main() {
    string input;
    bool isNumeric = true;

    cout << "Enter input: ";
    cin >> input;

    for (char c : input) {
        if (!isdigit(c)) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }

    return 0;
}
