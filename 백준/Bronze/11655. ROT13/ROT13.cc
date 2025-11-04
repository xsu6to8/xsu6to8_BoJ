#include <iostream>
#include <string>

using namespace std;

char rot13(char c) {
    if ('a' <= c && c <= 'z') {
        return (c - 'a' + 13) % 26 + 'a';
    } else if ('A' <= c && c <= 'Z') {
        return (c - 'A' + 13) % 26 + 'A';
    }
    return c;
}

int main() {
    string s;
    getline(cin, s);
    
    for (char &c : s) {
        c = rot13(c);
    }
    
    cout << s << endl;
    return 0;
}