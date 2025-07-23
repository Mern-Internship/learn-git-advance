#include <iostream>
#include <string>
#include <algorithm> // for reverse()
using namespace std;

int main() {
    string str;

    // Input from user
    cout << "Enter a string: ";
    getline(cin, str);  // to read full line including spaces

    // Reverse the string
    reverse(str.begin(), str.end());

    // Output the reversed string
    cout << "Reversed string: " << str << endl;

    return 0;
}