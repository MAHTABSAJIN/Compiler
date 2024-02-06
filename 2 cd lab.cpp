#include <iostream>
using namespace std;

int main() {
    string i;

    cout << "Enter input: ";
    cin >> i;

    for (char c : i) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%') {
            cout << "Operator: " << c << endl;
        }
        else
        {
            cout<<"Not Operator:";
        }
    }

    return 0;
}
