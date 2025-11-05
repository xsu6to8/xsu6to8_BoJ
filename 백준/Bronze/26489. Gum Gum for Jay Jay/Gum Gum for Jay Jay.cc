#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int count = 0;
    string line;
    
    while (getline(std::cin, line)) 
        count++;

    cout << count;

}