#include <iostream>
using namespace std;
int main() {
    char str[100];
    int length =0;
    bool Palindromen = true;

    cout << "Enter a string: ";
cin>> str;

    while (str[length] != '\0') {
        length++;
    }
//
    int start = 0;
    int end = length - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            Palindromen = false;
            break;
        }
        start++;
        end--;
    }
    if (Palindromen)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
} 
