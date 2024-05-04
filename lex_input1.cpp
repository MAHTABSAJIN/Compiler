#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void explainCode(const string& filename) {
    ifstream file(filename);
    string line;
    int lineNum = 0;

if (file.is_open()) {
        while (getline(file, line)) {
            lineNum++;
            cout << "Line " << lineNum << ": " << line << endl;


if (line.find("#include") != string::npos) {
                cout << "   // This line includes a header file for input and output operations." << endl;
        } else if (line.find("using namespace std;") != string::npos) {
                cout << "   // This line declares that names from the std namespace are used." << endl;
            } else if (line.find("int main()") != string::npos) {
                cout << "   // This line defines the entry point of the program." << endl;
            } else if (line.find("return 0;") != string::npos) {
                cout << "   // This line indicates successful termination of the main function." << endl;
        } else if (line.find("cout") != string::npos) {
                cout << "   // This line prints output to the console." << endl;
        } else if (line.find("int ") != string::npos) {
                cout << "   // This line declares an integer variable." << endl;
    } else if (line.find("=") != string::npos && (line.find("x = ") != string::npos || line.find("y = ") != string::npos || line.find("z = ") != string::npos)) {
                cout << "   // This line initializes a variable with a value." << endl;
    } else if (line.find("if (") != string::npos) {
                cout << "   // This line is a conditional statement." << endl;
    } else {
                cout << "   // This line performs some unspecified operation." << endl;
            }
}
        file.close();
    } else {
    cout << "Unable to open file: " << filename << endl;
}
}



int main() {
    string filename = "sajin.cpp";
    explainCode(filename);

    return 0;
}

