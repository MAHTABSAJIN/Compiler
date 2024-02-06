#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& input) {
    return (input.substr(0, 2) == "//");
}

bool isMultiLineCommentStart(const string& input) {
    return (input.substr(0, 2) == "/*");
}

bool isMultiLineCommentEnd(const string& input) {
    return (input.substr(input.size() - 2, 2) == "*/");
}

bool isComment(const string& input) {
    if (isSingleLineComment(input) || isMultiLineCommentStart(input) || isMultiLineCommentEnd(input)) {
        return true;
    }
    return false;
}

int main() {
    string input;

    cout << "Enter input: ";
    getline(cin, input);

    if (isComment(input)) {
        cout << "Input is a comment" << endl;
    } else {
        cout << "Input is not a comment" << endl;
    }

    return 0;
}

