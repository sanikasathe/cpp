#include<iostream>
#include<string.h>
using namespace std;
// Function to check if a string is uppercase or lowercase
string checkCase(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            return "The string is entirely uppercase.";
        } else if (islower(str[i])) {
            return "The string is entirely lowercase.";
        }
    }
    return "The string is a mix of uppercase and lowercase letters.";
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << checkCase(str) << endl;

    return 0;
}
