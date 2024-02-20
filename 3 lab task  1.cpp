#include <iostream>
#include <string>
using namespace std;

bool VariableName(const string& a) {

    if (a.empty()) {
        cout << "Variable name cannot be empty"<<endl;
        return false;
    }


    if (!(a[0] >= 'a' && a[0] <= 'z') && !(a[0] >= 'A' && a[0] <= 'Z') && a[0] != '_') {
        cout << "Variable name must start with a letter or underscore"<<endl;
        return false;
    }


    for (char c : a) {

        if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || c == '_')) {
            cout << "Invalid character in variable name: " << c << endl;
            return false;
        }
    }


    if (a == "char" || a == "int" || a== "float" || a == "double" || a== "for" ||
        a == "if" || a == "else" || a=="else if"|| a == "while" || a == "return" || a== "class"||a=="void") {
         return false;
    }


    return true;
}

int main() {
    string input;
    cout << "Enter a variable name: ";
    cin >> input;

    if (VariableName(input)) {
        cout  << input << " is a valid variable name "<<endl;
    }
    else
    {
        //cout<<"\n";
        cout<< input << " is  not a valid variable name "<<endl;
    }
}

