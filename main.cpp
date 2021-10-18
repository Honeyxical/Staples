#include <iostream>

using namespace std;

void balanceBrackets(char string[]);

void addBrackets(char string[], char bracket);

int searchLens(char string[]);

int main() {

    char string[255];

    cout << "Enter a string:";
    cin >> string;

    balanceBrackets(string);
}

void balanceBrackets(char string[]) {
    for (int i = searchLens(string); i >= 0; --i) {
        if (string[i] == '{') {
            addBrackets(string, '}');
        }
        if (string[i] == '(') {
            addBrackets(string, ')');
        }
        if (string[i] == '[') {
            addBrackets(string, ']');
        }
    }
    cout << string;
}

void addBrackets(char string[], char bracket) {
    int i;
    for (i = 0; string[i] != '\0'; ++i) {};
    string[i] = bracket;
}

int searchLens(char string[]) {
    int lens;
    for (int i = 0; string[i] != '\0'; ++i) {
        lens = i;
    }
    return lens;
}